//
//  ClassBulletinDelegate.m
//  智慧校园
//
//  Created by Akson on 14-8-4.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ClassBulletinDelegate.h"
#import "QuartzCore/QuartzCore.h"
#import "ClassBulletinTableViewCell.h"

@implementation ClassBulletinDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 16;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *cellIdentifier = @"ClassBulletinCell";
    
    ClassBulletinTableViewCell *cell = (ClassBulletinTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (!cell) {
        NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"ClassBulletinTableViewCell" owner:self options:nil];
        cell = array[0];
        [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
        NSMutableAttributedString *timeString = [[NSMutableAttributedString alloc] initWithString:@"    2014年 \n 02-08"];
        [timeString addAttribute:NSFontAttributeName value:[UIFont fontWithName:@"HelveticaNeue-Bold" size:10.0] range:NSMakeRange(0, 12)];
        cell.classBulletinTimeLable.attributedText = timeString;
        cell.classBulletinTimeLable.layer.borderColor = [UIColor redColor].CGColor;
        cell.classBulletinTimeLable.layer.borderWidth = 2.0;
        
        
        NSString *TitleString = @"在项目开发中，我们经常会遇到体现字";
        NSString *ContentString = @"    使用不同的颜色或不同的字体来体现字符串， 在iOS 6 以后我们...";
        
        cell.classBulletinContentLable.text = ContentString;
        cell.classBulletinTitleLable.text = TitleString;
        
        
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.row]);
}
@end
