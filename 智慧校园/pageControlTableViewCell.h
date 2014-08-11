//
//  pageControlTableViewCell.h
//  智慧校园
//
//  Created by Akson on 14-7-24.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pageControlTableViewCell : UITableViewCell

@property (strong, nonatomic) NSArray *newsArray;

@property (strong, nonatomic) IBOutlet UILabel *newsTitleLable;

@property (strong, nonatomic) IBOutlet UILabel *newsContentLabel;
@property (strong, nonatomic) IBOutlet UILabel *newsTimeLabel;
@end
