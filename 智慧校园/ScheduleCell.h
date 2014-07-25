//
//  ScheduleCell.h
//  智慧校园
//
//  Created by Akson on 14-7-24.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScheduleCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIButton *imageScheduleBtn;

@property (strong, nonatomic) IBOutlet UILabel *todayAmLable;
@property (strong, nonatomic) IBOutlet UILabel *todayPmLable;
@property (strong, nonatomic) IBOutlet UILabel *tomorrowAmLabel;

@property (strong, nonatomic) IBOutlet UILabel *tomorrowPmLable;

@end
