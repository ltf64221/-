//
//  SchoolNewsTableViewCell.h
//  智慧校园
//
//  Created by Akson on 14-7-28.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SchoolNewsTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *newsTimeLabel;
@property (strong, nonatomic) IBOutlet UILabel *newsContentLabel;
@property (strong, nonatomic) IBOutlet UILabel *newsTitleLable;

@end
