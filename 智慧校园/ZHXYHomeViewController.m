//
//  ZHXYHomeViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYHomeViewController.h"

@interface ZHXYHomeViewController ()<UITableViewDataSource,UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *homeTableView;

@end

@implementation ZHXYHomeViewController
@synthesize homeTableView = _homeTableView;

- (UITableView *)homeTableView{
    if (!_homeTableView) {
        _homeTableView = [[UITableView alloc] init];
    }
    return _homeTableView;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationController.navigationBarHidden = NO;
    self.homeTableView.delegate = self;
    self.homeTableView.dataSource = self;

}


#pragma  mark - tableView datasource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}



- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static  NSString *cellIdentifier = @"CellIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellIdentifier];
        
    }
    if (indexPath.row == 0) {
        UIPageControl *schoolInfoPageControl = [[UIPageControl alloc]initWithFrame:CGRectMake(0, 0, 320, 100)];
       // schoolInfoPageControl.backgroundColor = [UIColor redColor];
        schoolInfoPageControl.hidesForSinglePage = NO;
        [cell.contentView addSubview:schoolInfoPageControl];
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
            return 60;
        case 3:
            return 150;
    }
    return 200;
}

@end
