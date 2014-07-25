//
//  dataSourceAndDelegate_0.m
//  智慧校园
//
//  Created by Akson on 14-7-24.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "dataSourceAndDelegate_0.h"

@implementation dataSourceAndDelegate_0

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *indentifier = @"insiderIdentifier";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:indentifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:indentifier];
    }
    
    cell.textLabel.text = [NSString stringWithFormat:@"indexPath_row:%d", indexPath.row];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.row]);
}
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    return 90;
    
}

@end
