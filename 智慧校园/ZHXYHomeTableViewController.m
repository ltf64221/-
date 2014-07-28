//
//  ZHXYHomeTableViewController.m
//  智慧校园
//
//  Created by liutianfu on 14-7-27.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYHomeTableViewController.h"
#import "ZHXYShowDetailContentViewController.h"
#import "HDScrollview.h"
#import "insertTableViewCell.h"
#import "pageControlTableViewCell.h"
#import "HomeWorkCell.h"
#import "DataSourceAndDelegate.h"
#import "ScheduleCell.h"
//#import "ZHXYSelectClassViewController.h"



@interface ZHXYHomeTableViewController ()<UIScrollViewDelegate,HDScrollviewDelegate>

@property (strong, nonatomic) NSMutableArray *tableViewCellArray;
@property (strong, nonatomic) HDScrollview *HDSchoolInfoScrollView;
@property (strong, nonatomic) DataSourceAndDelegate *dataAndDelegate;
@property (strong, nonatomic) NSArray *imageArray;
@property (strong, nonatomic) NSTimer *newsPageTimer;
@end

@implementation ZHXYHomeTableViewController
@synthesize tableViewCellArray = _tableViewCellArray;
@synthesize HDSchoolInfoScrollView = _HDSchoolInfoScrollView;
@synthesize dataAndDelegate = _dataAndDelegate;
@synthesize imageArray = _imageArray;
@synthesize newsPageTimer = _newsPageTimer;

- (NSArray *)imageArray{
    if (!_imageArray) {
        _imageArray = @[[UIImage imageNamed:@"Expression_1@2x.png"],[UIImage imageNamed:@"Expression_2@2x.png"],[UIImage imageNamed:@"Expression_3@2x.png"],[UIImage imageNamed:@"Expression_1@2x.png"]];
    }
    return _imageArray;
}

- (DataSourceAndDelegate *)dataAndDelegate{
    if (!_dataAndDelegate) {
        _dataAndDelegate = [[DataSourceAndDelegate alloc]init];
    }
    return _dataAndDelegate;
}


- (NSMutableArray *)tableViewCellArray{
    if (!_tableViewCellArray) {
        _tableViewCellArray = [NSMutableArray arrayWithCapacity:TABLEVIEWCELL_NUMBER];
        for (int i = 0; i < TABLEVIEWCELL_NUMBER; i++) {
           
            NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"pageControlTableViewCell" owner:self options:nil];
            
            [_tableViewCellArray insertObject:array[0] atIndex:i];
        }
        
    }
    
    return _tableViewCellArray;
}


- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.navigationItem.title = @"111";
    
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"邮箱" style:UIBarButtonItemStylePlain target:self action:@selector(eMail)];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"设置" style:UIBarButtonItemStylePlain target:self action:@selector(setAttribute)];
    
    
}

- (void)eMail{
    
}

- (void)setAttribute{
    
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 4;
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static  NSString *cellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellIdentifier];
    }
    if (indexPath.section == 0) {
        
        self.HDSchoolInfoScrollView = [[HDScrollview alloc] initWithFrame:CGRectMake(0, 0, 320, 100)withImageView:self.tableViewCellArray];
        
        self.HDSchoolInfoScrollView.delegate = self;
        self.HDSchoolInfoScrollView.HDdelegate = self;
        [cell.contentView addSubview:self.HDSchoolInfoScrollView];
        
        
        self.HDSchoolInfoScrollView.pagecontrol.frame = CGRectMake(0, self.HDSchoolInfoScrollView.pagecontrol.frame.origin.y+self.HDSchoolInfoScrollView.frame.size.height-10, 320, 10);
        self.HDSchoolInfoScrollView.pagecontrol.currentcolor = [UIColor redColor];
        self.HDSchoolInfoScrollView.pagecontrol.othercolor = [UIColor greenColor];
        self.HDSchoolInfoScrollView.pagecontrol.currentPage = 0;
        [cell.contentView addSubview:self.HDSchoolInfoScrollView.pagecontrol];
        
        
    }
    if (indexPath.section == 1) {
        
        HomeWorkCell *cell = (HomeWorkCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
        if (!cell) {
            NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"HomeWorkCell" owner:self options:nil];
            cell = array[0];
            [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
            cell.imageBtn.backgroundColor = [[UIColor alloc]initWithWhite:0.5 alpha:0.05];
            cell.imageView.image = [UIImage imageNamed:@"Expression_1@2x.png"];
            cell.textLabel.text = @"今天无作业布置";
            cell.textLabel.font = [UIFont boldSystemFontOfSize:10];
        }
        return cell;
    }
    
    if (indexPath.section == 2) {
        
        ScheduleCell *cell = (ScheduleCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
        if (!cell) {
            NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"ScheduleCell" owner:self options:nil];
            cell = array[0];
            [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
            cell.imageScheduleBtn.backgroundColor = [[UIColor alloc]initWithWhite:0.5 alpha:0.05];
            cell.imageView.image = [UIImage imageNamed:@"Expression_2@2x.png"];
            cell.todayAmLable.text = @"意义意义";
            cell.tomorrowAmLabel.text = @"测试上午";
        }
        return cell;
        
    }
    if (indexPath.section == 3) {
       
        insertTableViewCell *cell = (insertTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
        if (!cell) {
            NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"insertTableViewCell" owner:self options:nil];
            cell = array[0];
            [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
            cell.prepareLessonsTableView.dataSource = self.dataAndDelegate;
            cell.prepareLessonsTableView.delegate = self.dataAndDelegate;
        }
        return cell;
    }
    
    return cell;

}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.section) {
        case 0:
            return ROW_HIGHT_0;
        case 1:
            return ROW_HIGHT_1;
        case 2:
            return ROW_HIGHT_2;
        case 3:
            return 480 - (ROW_HIGHT_0 + ROW_HIGHT_1 + ROW_HIGHT_2);
    }
    return 200;
    
    
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    [self.HDSchoolInfoScrollView HDscrollViewDidScroll];
}

- (void)scrollViewDidEndDecelerating:(UIScrollView *)_scrollView
{
    [self.HDSchoolInfoScrollView HDscrollViewDidEndDecelerating];
}

-(void)showDetailContentView:(int)index
{
    [self.navigationController pushViewController:[[ZHXYShowDetailContentViewController alloc]init] animated:NO];
}

-(void)BTNCLICK:(UIButton *)sender
{
    NSLog(@"%@",sender.titleLabel.text);
}

- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section{
    if (section == 0) {
        UIImageView *imageView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 150, 20)];
        imageView.backgroundColor = [[UIColor alloc]initWithWhite:0.5 alpha:0.05];
        UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(2, 0, 100, 20)];
        btn.backgroundColor = [UIColor redColor];
        [imageView addSubview:btn];
        return imageView;
    }
    if (section == 2) {
        UIImageView *imageView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 150, 20)];
        imageView.backgroundColor = [[UIColor alloc]initWithWhite:0.5 alpha:0.05];
        UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(2, 0, 50, 20)];
        btn.backgroundColor = [[UIColor alloc]initWithRed:1 green:0 blue:0 alpha:0.6];
        [imageView addSubview:btn];
        return imageView;
    }
    return nil;
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    switch (section) {
        case 0:
            return 20;
        case 1:
            return 5;
        case 2:
            return 20;
        case 3:
            return 0;
        default:
            break;
    }
    return 5;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    switch (section) {
        case 0:
            return 0;
        case 1:
            return 5;
        case 2:
            return 5;
        case 3:
            return 5;
        default:
            break;
    }
    return 5;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (indexPath.row == 1){
        //self.navigationController pushViewController:<#(UIViewController *)#> animated:<#(BOOL)#>
    }
}


@end
