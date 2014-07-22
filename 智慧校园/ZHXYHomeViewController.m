//
//  ZHXYHomeViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYHomeViewController.h"
#import "ZHXYShowDetailContentViewController.h"
#import "HDScrollview.h"

@interface ZHXYHomeViewController ()<UITableViewDataSource,UITableViewDelegate,UIScrollViewDelegate,HDScrollviewDelegate>

@property (strong, nonatomic) UITableView *homeTableView;
@property (strong, nonatomic) NSMutableArray *tableViewCellArray;
@property (strong, nonatomic) HDScrollview *HDSchoolInfoScrollView;
@end

@implementation ZHXYHomeViewController
@synthesize homeTableView = _homeTableView;
@synthesize tableViewCellArray = _tableViewCellArray;
@synthesize HDSchoolInfoScrollView = _HDSchoolInfoScrollView;

- (NSMutableArray *)tableViewCellArray{
    if (!_tableViewCellArray) {
        _tableViewCellArray = [NSMutableArray arrayWithCapacity:TABLEVIEWCELL_NUMBER];
        for (int i = 0; i < TABLEVIEWCELL_NUMBER; i++) {
            UITableViewCell *cell = [[UITableViewCell alloc]initWithFrame:CGRectMake(0, 0, 320, 100)];
            cell.textLabel.text = [NSString stringWithFormat:@"news:%d",i];
            [_tableViewCellArray insertObject:cell atIndex:i];
        }

    }
    
    return _tableViewCellArray;
}

- (UITableView *)homeTableView{
    if (!_homeTableView) {
        _homeTableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, 320, 480 - 40*2)];
    }
    return _homeTableView;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationController.navigationBarHidden = NO;
    self.homeTableView.delegate = self;
    self.homeTableView.dataSource = self;
    [self.view addSubview:self.homeTableView];
    
}


#pragma  mark - tableView datasource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 4;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static  NSString *cellIdentifier = @"CellIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellIdentifier];
        
    }
    if (indexPath.row == 0) {

        
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
    if (indexPath.row == 1) {
        cell.textLabel.text = @"今天无作业布置";
       // cell.imageView.image = [UIImage imageNamed:@"Expression_1@2x.png"];
        
    }
    if (indexPath.row == 2) {
        UILabel *todayLable = [[UILabel alloc]initWithFrame:CGRectMake(20, 300, 10, 10)];
        todayLable.text = @"今日";
        todayLable.backgroundColor = [UIColor redColor];
        [cell.contentView addSubview:todayLable];
    }
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.row) {
        case 0:
            return 100;
        case 1:
            return 80;
        case 2:
            return 80;
        case 3:
            return 200;
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

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (indexPath.row == 1){
        //self.navigationController pushViewController:<#(UIViewController *)#> animated:<#(BOOL)#>
    }
}
@end
