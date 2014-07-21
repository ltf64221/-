//
//  ZHXYHomePageTabBarController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYHomePageTabBarController.h"
#import "ZHXYSchoolInfoViewController.h"
#import "ZHXYeSquareViewController.h"
#import "ZHXYCloudLibraryViewController.h"
#import "ZHXYEducationCenterViewController.h"
#import "ZHXYHomeViewController.h"

@interface ZHXYHomePageTabBarController ()<UITabBarControllerDelegate>


@end

@implementation ZHXYHomePageTabBarController



- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    ZHXYHomeViewController *homeViewController = [[ZHXYHomeViewController alloc]init];
    ZHXYSchoolInfoViewController *schoolInfoViewController = [[ZHXYSchoolInfoViewController alloc]init];
    ZHXYeSquareViewController *eSquareViewController = [[ZHXYeSquareViewController alloc]init];
    ZHXYEducationCenterViewController *educationCenterViewController = [[ZHXYEducationCenterViewController alloc]init];
    ZHXYCloudLibraryViewController *cloudLibraryViewController = [[ZHXYCloudLibraryViewController alloc]init];
    
    homeViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"首页" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:0];
    
    schoolInfoViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"校园资讯" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:1];
    
    eSquareViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"e博广场" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:2];
    
    educationCenterViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"教务中心" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:3];
    
    cloudLibraryViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"云图书馆" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:4];
    
    self.viewControllers = @[homeViewController,schoolInfoViewController,eSquareViewController,educationCenterViewController,cloudLibraryViewController];
    self.delegate = self;
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationItem.hidesBackButton = YES;

}
- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}


@end
