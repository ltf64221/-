//
//  ZHXYUserLogViewController.h
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHXYUserLogViewController : UIViewController

@property (strong, nonatomic) void(^userLogInfoBlock)(NSMutableArray *_data);

@end
