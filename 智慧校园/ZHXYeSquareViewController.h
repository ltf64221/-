//
//  ZHXYeSquareViewController.h
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHXYeSquareViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *eSquareView;
@property (strong, nonatomic) IBOutlet UITableView *eSquareTableView;

@property (strong, nonatomic) IBOutlet UIView *myeTwitterView;

@property (strong, nonatomic) IBOutlet UIView *myCircleView;
@property (strong, nonatomic) IBOutlet UITableView *myCircleTableView;


@property (strong, nonatomic) IBOutlet UIView *e_MessageView;
@property (strong, nonatomic) IBOutlet UITableView *e_MessageTableView;

@property (strong, nonatomic) IBOutlet UISearchBar *eMessageSearchBar;

@property (strong, nonatomic) IBOutlet UITableView *eMessageTableView;

@end
