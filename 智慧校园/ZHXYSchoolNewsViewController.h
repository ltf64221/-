//
//  ZHXYSchoolNewsViewController.h
//  智慧校园
//
//  Created by Akson on 14-7-28.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHXYSchoolNewsViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *schoolNewsTableView;

@property (strong, nonatomic) IBOutlet UIView *ClassBulletinView;
@property (strong, nonatomic) IBOutlet UITableView *classBulletinTableView;

@property (strong, nonatomic) IBOutlet UIView *classPrepareView;

@property (strong, nonatomic) IBOutlet UIView *todayHomeWorkView;
@property (strong, nonatomic) UISegmentedControl *classDynamicsSegmentedControl;

@property (strong, nonatomic) IBOutlet UIView *NewsTableView;

@property (strong, nonatomic) IBOutlet UIView *CampusActivitiesView;
@property (strong, nonatomic) IBOutlet UITableView *campusActTableView;


@end
