//
//  SchoolNewsDataSourceAndDelegate.m
//  智慧校园
//
//  Created by Akson on 14-7-28.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "SchoolNewsDataSourceAndDelegate.h"
#import "SchoolNewsTableViewCell.h"
#import "QuartzCore/QuartzCore.h"

@implementation SchoolNewsDataSourceAndDelegate
#if 1
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 16;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{

    static NSString *cellIdentifier = @"schoolNewsCell";
    
    SchoolNewsTableViewCell *cell = (SchoolNewsTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (!cell) {
        NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"SchoolNewsTableViewCell" owner:self options:nil];
        cell = array[0];
        [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
        NSMutableAttributedString *timeString = [[NSMutableAttributedString alloc] initWithString:@"    2014年 \n 02-08"];
        [timeString addAttribute:NSFontAttributeName value:[UIFont fontWithName:@"HelveticaNeue-Bold" size:10.0] range:NSMakeRange(0, 12)];
        cell.newsTimeLabel.attributedText = timeString;
        cell.newsTimeLabel.layer.borderColor = [UIColor redColor].CGColor;
        cell.newsTimeLabel.layer.borderWidth = 2.0;
        
        
       NSString *newsTitleString = @"在项目开发中，我们经常会遇到体现字";
       NSString *newsContentString = @"    使用不同的颜色或不同的字体来体现字符串， 在iOS 6 以后我们...";
        
       cell.newsContentLabel.text = newsContentString;
       cell.newsTitleLable.text = newsTitleString;
        

    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.row]);
}
#endif

@end
