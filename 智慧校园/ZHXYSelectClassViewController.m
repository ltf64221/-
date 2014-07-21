//
//  ZHXYSelectClassViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYSelectClassViewController.h"
#import "ZHXYHomePageTabBarController.h"

@interface ZHXYSelectClassViewController () <UITableViewDataSource,UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *selectClassTableView;
@property (strong, nonatomic) NSArray *classNameArray;
@property (strong, nonatomic) NSArray *detailPersonNumber;
@property (strong, nonatomic) NSArray *imageArray;

@end

@implementation ZHXYSelectClassViewController
@synthesize selectClassTableView = _selectClassTableView;
@synthesize classNameArray = _classNameArray;
@synthesize detailPersonNumber = _detailPersonNumber;
@synthesize imageArray = _imageArray;
@synthesize titleStringBlock = _titleStringBlock;

- (NSArray *)imageArray{
    if (!_imageArray) {
        _imageArray = @[[UIImage imageNamed:@"checkbox1_checked@2x.png"],          [UIImage imageNamed:@"checkbox1_checked@2x.png"],
            [UIImage imageNamed:@"checkbox1_checked@2x.png"],
            [UIImage imageNamed:@"checkbox1_checked@2x.png"]];
    }
    return _imageArray;
}
- (NSArray *)classNameArray{
    if (!_classNameArray) {
        _classNameArray = @[@"2011年九年级2班",@"2013年七年级9班",@"2012年八年级9班",@"2012年八年级5班"];
    }
    return _classNameArray;
}

- (NSArray *)detailPersonNumber{
    if (!_detailPersonNumber) {
        _detailPersonNumber = @[@"共有3名同学",@"共有3名同学",@"共有11名同学",@"共有6名同学"];
    }
    return _detailPersonNumber;
}

- (UITableView *)selectClassTableView{
    if (!_selectClassTableView) {
        _selectClassTableView = [[UITableView alloc]init];
    }
    return _selectClassTableView;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = NO;
    self.navigationItem.title = @"时代e博初中阮老师";
    self.navigationItem.hidesBackButton = YES;
    self.selectClassTableView.delegate = self;
    self.selectClassTableView.dataSource = self;
}
- (void)viewDidLoad
{
    
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}
#pragma mark - datasource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;    
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [self.classNameArray count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static  NSString *cellIdentifier = @"CellIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellIdentifier];
        
    }
    cell.textLabel.text = self.classNameArray[indexPath.row];
    cell.detailTextLabel.text = self.detailPersonNumber[indexPath.row];
    cell.imageView.image = self.imageArray[indexPath.row];
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{

    return 1;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (indexPath.row < 4) {
        ZHXYHomePageTabBarController *homeTabBarController = [[ZHXYHomePageTabBarController alloc]init];
        homeTabBarController.navigationItem.title = [NSString stringWithFormat:@"时代e博初中 %@",self.classNameArray[indexPath.row]];
        
        self.titleStringBlock = ^(void){
            return homeTabBarController.navigationItem.title;
        };
        
        [self.navigationController pushViewController:homeTabBarController animated:NO];
    }
}


@end
