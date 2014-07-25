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
#import "insertTableViewCell.h"
#import "pageControlTableViewCell.h"
#import "HomeWorkCell.h"
#import "DataSourceAndDelegate.h"
#import "ScheduleCell.h"

@interface ZHXYHomeViewController ()<UITableViewDataSource,UITableViewDelegate,UIScrollViewDelegate,HDScrollviewDelegate>

@property (strong, nonatomic) UITableView *homeTableView;
@property (strong, nonatomic) NSMutableArray *tableViewCellArray;
@property (strong, nonatomic) HDScrollview *HDSchoolInfoScrollView;
@property (strong, nonatomic) DataSourceAndDelegate *dataAndDelegate;
@end

@implementation ZHXYHomeViewController
@synthesize homeTableView = _homeTableView;
@synthesize tableViewCellArray = _tableViewCellArray;
@synthesize HDSchoolInfoScrollView = _HDSchoolInfoScrollView;
@synthesize dataAndDelegate = _dataAndDelegate;

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
            UITableViewCell *cell = [[UITableViewCell alloc]initWithFrame:CGRectMake(0, 40, 320, 100)];
            cell.textLabel.text = [NSString stringWithFormat:@"news:%d",i];
            [_tableViewCellArray insertObject:cell atIndex:i];
        }

    }
    
    return _tableViewCellArray;
}

- (UITableView *)homeTableView{
    if (!_homeTableView) {
        _homeTableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, 320, 480 - 40*2)];
       _homeTableView.delegate = self;
       _homeTableView.dataSource = self;
    }
    return _homeTableView;
}

- (void)viewDidLoad
{
    
    [super viewDidLoad];
    self.navigationController.navigationBarHidden = NO;
    [self.view addSubview:self.homeTableView];
    
}


#pragma  mark - tableView datasource

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
            
            /*
            pageControlTableViewCell *cell = (pageControlTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"pageControlTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                cell.textLabel.text = @"111";
            }
            return cell;
            */
            
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
                cell.textLabel.font = [UIFont boldSystemFontOfSize:LABEL_FONT];
              //  cell.backgroundColor = [UIColor redColor];
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
               // cell.backgroundColor = [UIColor redColor];
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
               cell.backgroundColor = [UIColor redColor];
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
            return ROW_HIGHT_3 - 150;
        }
        return ROW_HIGHT_default;


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
            return 10;
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
