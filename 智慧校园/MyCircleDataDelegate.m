//
//  MyCircleDataDelegate.m
//  智慧校园
//
//  Created by Akson on 14-8-5.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "MyCircleDataDelegate.h"
#import "MyCircleContentTableViewCell.h"
#import "MyCircleTitleTableViewCell.h"

@interface MyCircleDataDelegate ()
@property (nonatomic, strong) NSArray *cellNameArray;

@end

@implementation MyCircleDataDelegate
@synthesize cellNameArray = _cellNameArray;

- (BOOL)openContentCell{
    return NO;
}


- (NSArray *)cellNameArray{
    if (!_cellNameArray) {
        _cellNameArray = @[@"朋友圈",@"时代e博初中老师圈",@"2013年七年级2班老师圈",@"2013年七年级2班家长圈",@"2013年七年级2班学生圈"];
    }
    return _cellNameArray;
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 5;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (self.openContentCell) {
        return 2;
    }
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"MyCircleCell";
    MyCircleTitleTableViewCell *cell = (MyCircleTitleTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (!cell) {
        NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleTitleTableViewCell" owner:self options:nil];
        cell = array[0];
        [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
        cell.myCircleTitleLable.text = self.cellNameArray[indexPath.section];
    }

#if 0
    if (indexPath.section == 0) {

        if (indexPath.row == 1 && self.openContentCell) {
            MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                
            }
        }
        
    }
    if (indexPath.section == 1) {

        if (indexPath.row == 1 && self.openContentCell) {
            MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                
            }
        }
        

        return cell;
    }
    
#endif

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.section]);
   if (indexPath.section == 0) {
        if (indexPath.row == 0) {
            self.openContentCell = YES;//(self.openContentCell?NO:YES);
       }
   }
    if (indexPath.section == 1) {
       if (indexPath.row == 0) {
           self.openContentCell = YES;//(self.openContentCell?NO:YES);
        }
    }
}
- (void)reloadRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation{

}
@end
