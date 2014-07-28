//
//  pageControlTableViewCell.m
//  智慧校园
//
//  Created by Akson on 14-7-24.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "pageControlTableViewCell.h"

@implementation pageControlTableViewCell

- (void)awakeFromNib
{
    // Initialization code
    //得到的新闻 用block  实现,在这边定义一个数组,在下载数据地方 用block 填充数组数据
    self.newsTitleLable.text = @"hello";
    self.newsContentLabel.text = @"world";
    self.newsTimeLabel.text = @"time";
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
//
//- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
//{
//#warning Potentially incomplete method implementation.
//    // Return the number of sections.
//    return 1;
//}
//
//- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
//{
//#warning Incomplete method implementation.
//    // Return the number of rows in the section.
//    return 1;
//}
//
//
//- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
//{
//    static NSString *cellIdentifier = @"cell";
//    pageControlTableViewCell *cell = (pageControlTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
//    if (!cell) {
//        NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"pageControlTableViewCell" owner:self options:nil];
//        cell = array[0];
//        [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
//    }
//    cell.textLabel.text = @"的方式的缴";
//    cell.backgroundColor = [UIColor redColor];
//    return cell;
//    
//}

- (IBAction)newsTurn:(UIPageControl *)sender {

}

@end
