//
//  ZHXYSchoolNewsViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-28.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYSchoolNewsViewController.h"
#import "SchoolNewsDataSourceAndDelegate.h"
#import "CampusActivitiesDataAndDelegate.h"
#import "ClassBulletinDelegate.h"
#import "EGORefreshTableHeaderView.h"
#import "CCSegmentedControl.h"

@interface ZHXYSchoolNewsViewController ()<EGORefreshTableHeaderDelegate>
@property (strong, nonatomic) SchoolNewsDataSourceAndDelegate *schoolNewsDelegate;
@property (strong, nonatomic) CampusActivitiesDataAndDelegate *campusDelegate;
@property (strong, nonatomic) ClassBulletinDelegate *classBulletinDelegate;
@property (strong, nonatomic) EGORefreshTableHeaderView *refreshHeaderView;
@property (strong, nonatomic) CCSegmentedControl *schoolInfoSegmentedControl;
@property (nonatomic) BOOL reloading;

@end

@implementation ZHXYSchoolNewsViewController

@synthesize schoolNewsDelegate = _schoolNewsDelegate;
@synthesize campusDelegate = _campusDelegate;
@synthesize classBulletinDelegate = _classBulletinDelegate;


@synthesize schoolNewsTableView = _schoolNewsTableView;
@synthesize campusActTableView = _campusActTableView;

@synthesize schoolInfoSegmentedControl = _schoolInfoSegmentedControl;
@synthesize classDynamicsSegmentedControl = _classDynamicsSegmentedControl;

@synthesize ClassBulletinView = _ClassBulletinView;
@synthesize CampusActivitiesView = _CampusActivitiesView;
@synthesize NewsTableView = _NewsTableView;
@synthesize classPrepareView = _classPrepareView;
@synthesize todayHomeWorkView = _todayHomeWorkView;
@synthesize classBulletinTableView = _classBulletinTableView;
@synthesize refreshHeaderView = _refreshHeaderView;
@synthesize reloading = _reloading;

- (CCSegmentedControl *)schoolInfoSegmentedControl{
    if (!_schoolInfoSegmentedControl) {
        
        _schoolInfoSegmentedControl = [[CCSegmentedControl alloc] initWithItems:@[@"校园新闻",@"班级动态",@"校园活动"]];
        _schoolInfoSegmentedControl.frame = CGRectMake(0, StateAndNavigatonHight, ScreenWidth, SchoolSegmentedControlHight);
        _schoolInfoSegmentedControl.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"segment_bg.png"]];
        _schoolInfoSegmentedControl.backgroundImage = [UIImage imageNamed:@"segment_bg.png"];
        _schoolInfoSegmentedControl.selectedStainView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"stain.png"]];
        _schoolInfoSegmentedControl.selectedSegmentTextColor = [UIColor redColor];
        
    }
    return _schoolInfoSegmentedControl;
}

- (UISegmentedControl *)classDynamicsSegmentedControl{
    if (!_classDynamicsSegmentedControl) {
        _classDynamicsSegmentedControl = [[UISegmentedControl alloc] initWithItems:@[@"班级公告",@"课程预习",@"今日作业"]];
        _classDynamicsSegmentedControl.frame = CGRectMake(20, StateAndNavigatonHight + SchoolSegmentedControlHight + TwoSegmentedControlGap, ScreenWidth - 20*2, ClassDynamicsSegmentedControlHight);
    }
    return _classDynamicsSegmentedControl;
}

- (UITableView *)campusActTableView{
    if (!_campusActTableView) {
        _campusActTableView = [[UITableView alloc] init];
    }
    return _campusActTableView;
}

- (UITableView *)classBulletinTableView{
    if (!_classBulletinTableView) {
        _classBulletinTableView = [[UITableView alloc] init];
    }
    return _classBulletinTableView;
}

- (UITableView *)schoolNewsTableView{
    if (!_schoolNewsTableView) {
        _schoolNewsTableView = [[UITableView alloc] init];
    }
    return _schoolNewsTableView;
}

- (SchoolNewsDataSourceAndDelegate *)schoolNewsDelegate{
    if (!_schoolNewsDelegate) {
        _schoolNewsDelegate = [[SchoolNewsDataSourceAndDelegate alloc] init];
    }
    return _schoolNewsDelegate;
}

- (CampusActivitiesDataAndDelegate *)campusDelegate{
    if (!_campusDelegate) {
        _campusDelegate = [[CampusActivitiesDataAndDelegate alloc] init];
    }
    return _campusDelegate;
}

- (ClassBulletinDelegate *)classBulletinDelegate{
    if (!_classBulletinDelegate) {
        _classBulletinDelegate = [[ClassBulletinDelegate alloc] init];
    }
    return _classBulletinDelegate;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self.schoolInfoSegmentedControl addTarget:self action:@selector(segmentedAction:) forControlEvents:UIControlEventValueChanged];
    [self.view addSubview:self.schoolInfoSegmentedControl];
    
    
    self.NewsTableView.frame = CGRectMake(0, StateAndNavigatonHight + SchoolSegmentedControlHight, ScreenWidth, ScreenHeight - StateAndNavigatonHight - SchoolSegmentedControlHight);
    self.CampusActivitiesView.frame = CGRectMake(0, StateAndNavigatonHight + SchoolSegmentedControlHight, ScreenWidth, ScreenHeight - StateAndNavigatonHight - SchoolSegmentedControlHight);
    
    [self.view addSubview:self.CampusActivitiesView];
    [self.view addSubview:self.NewsTableView];
    
    self.schoolNewsTableView.dataSource = self.schoolNewsDelegate;
    self.schoolNewsTableView.delegate = self.schoolNewsDelegate;
    self.campusActTableView.dataSource = self.campusDelegate;
    self.campusActTableView.delegate = self.campusDelegate;
    self.classBulletinTableView.dataSource = self.classBulletinDelegate;
    self.classBulletinTableView.delegate = self.classBulletinDelegate;
    
    
    
    self.schoolInfoSegmentedControl.selectedSegmentIndex = 0;
    self.classDynamicsSegmentedControl.selectedSegmentIndex = 0;
    if (self.refreshHeaderView == nil) {
        EGORefreshTableHeaderView *view = [[EGORefreshTableHeaderView alloc] initWithFrame:CGRectMake(0.0f, 0.0f - self.schoolNewsTableView.bounds.size.height, ScreenWidth, ScreenHeight)];
        view.delegate = self;
        [self.schoolNewsTableView addSubview:view];
        self.refreshHeaderView = view;
    }
    
    [self.refreshHeaderView refreshLastUpdatedDate];
    
}
- (void)segmentedAction:(UISegmentedControl *)sender {
    NSLog(@"%d",self.schoolInfoSegmentedControl.selectedSegmentIndex);
    [self.NewsTableView setHidden:YES];
    [self.CampusActivitiesView setHidden:YES];
    switch (self.schoolInfoSegmentedControl.selectedSegmentIndex) {
        case 0:
            [self.NewsTableView setHidden:NO];
             [self.view bringSubviewToFront:self.NewsTableView];
            break;
        case 1:
            {
                [self.classDynamicsSegmentedControl addTarget:self action:@selector(classDynamicsSegmentedAction:) forControlEvents:UIControlEventValueChanged];
                [self.view addSubview:self.classDynamicsSegmentedControl];
               self.ClassBulletinView.frame = CGRectMake(0, StateAndNavigatonHight + SchoolSegmentedControlHight + ClassDynamicsSegmentedControlHight + 2*TwoSegmentedControlGap, ScreenWidth, ScreenHeight - (StateAndNavigatonHight + SchoolSegmentedControlHight + ClassDynamicsSegmentedControlHight + 2*TwoSegmentedControlGap));
               self.classPrepareView.frame = self.ClassBulletinView.frame;
               self.todayHomeWorkView.frame = self.ClassBulletinView.frame;
                
                [self.view addSubview:self.todayHomeWorkView];
                [self.view addSubview:self.classPrepareView];
                [self.view addSubview:self.ClassBulletinView];
                
            }

            break;
        case 2:
            [self.CampusActivitiesView setHidden:NO];
            [self.view bringSubviewToFront:self.CampusActivitiesView];
            break;
            
        default:
            break;
    }
    
}
- (void)classDynamicsSegmentedAction:(UISegmentedControl *)sender {
    NSLog(@"class:%d",self.classDynamicsSegmentedControl.selectedSegmentIndex);
    [self.ClassBulletinView setHidden:YES];
    [self.classPrepareView setHidden:YES];
    [self.todayHomeWorkView setHidden:YES];

    switch (self.classDynamicsSegmentedControl.selectedSegmentIndex) {
        case 0:
            [self.ClassBulletinView setHidden:NO];
            [self.view bringSubviewToFront:self.ClassBulletinView];
            break;
        case 1:
            [self.classPrepareView setHidden:NO];
            [self.view bringSubviewToFront:self.classPrepareView];
            break;
        case 2:
            [self.todayHomeWorkView setHidden:NO];
            [self.view bringSubviewToFront:self.todayHomeWorkView];
            break;
            
        default:
            break;
    }
}

#pragma mark Data Source Loading / Reloading Methods

- (void)reloadTableViewDataSource{
    
    //  should be calling your tableviews data source model to reload
    //  put here just for demo
    // [self resetSearch];
    _reloading = YES;
    
}

- (void)doneLoadingTableViewData{
    
    //  model should call this when its done loading
    [self.schoolNewsTableView reloadData];
  // [search resignFirstResponder];
    _reloading = NO;
    [_refreshHeaderView egoRefreshScrollViewDataSourceDidFinishedLoading:self.schoolNewsTableView];
    
}

#pragma mark UIScrollViewDelegate Methods

- (void)scrollViewDidScroll:(UIScrollView *)scrollView{
    
    [_refreshHeaderView egoRefreshScrollViewDidScroll:scrollView];
    
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate{
    
    [_refreshHeaderView egoRefreshScrollViewDidEndDragging:scrollView];
    
    if (!_reloading) { // 判断是否处于刷新状态，刷新中就不执行

        // 取内容的高度：

        //    如果内容高度大于UITableView高度，就取TableView高度
 
        //    如果内容高度小于UITableView高度，就取内容的实际高度
   
        float height = scrollView.contentSize.height > self.schoolNewsTableView.frame.size.height ?self.schoolNewsTableView.frame.size.height : scrollView.contentSize.height;

        if ((height - scrollView.contentSize.height + scrollView.contentOffset.y) / height > 0.2) {
 
            // 调用上拉刷新方法
    
        }

        if (- scrollView.contentOffset.y / self.schoolNewsTableView.frame.size.height > 0.2) {

            // 调用下拉刷新方法
 
        }

    }

    
}

#pragma mark -
#pragma mark EGORefreshTableHeaderDelegate Methods

- (void)egoRefreshTableHeaderDidTriggerRefresh:(EGORefreshTableHeaderView*)view{
    
    [self reloadTableViewDataSource];
    [self performSelector:@selector(doneLoadingTableViewData) withObject:nil afterDelay:3.0];
    
}

- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(EGORefreshTableHeaderView*)view{
    
    return _reloading; // should return if data source model is reloading
    
}

- (NSDate*)egoRefreshTableHeaderDataSourceLastUpdated:(EGORefreshTableHeaderView*)view{
    
    return [NSDate date]; // should return date data source was last changed
    
}
@end
