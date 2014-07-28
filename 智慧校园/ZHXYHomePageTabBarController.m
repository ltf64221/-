//
//  ZHXYHomePageTabBarController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYHomePageTabBarController.h"
#import "ZHXYeSquareViewController.h"
#import "ZHXYCloudLibraryViewController.h"
#import "ZHXYEducationCenterViewController.h"
#import "ZHXYHomeTableViewController.h"
#import "ZHXYSchoolNewsViewController.h"

@interface ZHXYHomePageTabBarController ()<UITabBarControllerDelegate>


@end

@implementation ZHXYHomePageTabBarController



- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    ZHXYHomeTableViewController *homeTableViewController = [[ZHXYHomeTableViewController alloc]init];
    ZHXYSchoolNewsViewController *schoolNewsViewController = [[ZHXYSchoolNewsViewController alloc]init];
    ZHXYeSquareViewController *eSquareViewController = [[ZHXYeSquareViewController alloc]init];
    ZHXYEducationCenterViewController *educationCenterViewController = [[ZHXYEducationCenterViewController alloc]init];
    ZHXYCloudLibraryViewController *cloudLibraryViewController = [[ZHXYCloudLibraryViewController alloc]init];
    
    UINavigationController *homeNavigation = [[UINavigationController alloc]initWithRootViewController:homeTableViewController];
    UINavigationController *schoolInfoNavigation = [[UINavigationController alloc]initWithRootViewController:schoolNewsViewController];
    UINavigationController *eSquareNavigation = [[UINavigationController alloc]initWithRootViewController:eSquareViewController];
    UINavigationController *educationCenterNavigation = [[UINavigationController alloc]initWithRootViewController:educationCenterViewController];
    UINavigationController *cloudLibraryNavigation = [[UINavigationController alloc]initWithRootViewController:cloudLibraryViewController];

    
    homeTableViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"首页" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:0];
    
    schoolNewsViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"校园资讯" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:1];
    
    eSquareViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"e博广场" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:2];
    
    educationCenterViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"教务中心" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:3];
    
    cloudLibraryViewController.tabBarItem = [[UITabBarItem alloc]initWithTitle:@"云图书馆" image:[UIImage imageNamed:@"checkbox1_checked@2x.png"] tag:4];

    self.viewControllers = @[homeNavigation,schoolInfoNavigation,eSquareNavigation,educationCenterNavigation,cloudLibraryNavigation];
    
    

}
- (void)viewDidLoad
{
    [super viewDidLoad];
}


@end
