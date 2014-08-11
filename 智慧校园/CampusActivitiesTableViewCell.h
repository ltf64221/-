//
//  CampusActivitiesTableViewCell.h
//  智慧校园
//
//  Created by Akson on 14-8-4.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CampusActivitiesTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *campusActTimeLable;

@property (strong, nonatomic) IBOutlet UILabel *campusActTitle;
@property (strong, nonatomic) IBOutlet UILabel *activitiesFlagLable;
@property (strong, nonatomic) IBOutlet UILabel *campusActContent;

@end
