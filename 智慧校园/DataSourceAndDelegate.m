//
//  DataSourceAndDelegate.m
//  智慧校园
//
//  Created by Akson on 14-7-24.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "DataSourceAndDelegate.h"

@implementation DataSourceAndDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 4;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *indentifier = @"insiderIdentifier";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:indentifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:indentifier];
    }
    cell.imageView.image = [UIImage imageNamed:@"Expression_4@2x.png"];
    cell.textLabel.text = [NSString stringWithFormat:@"indexPath_row:%d", indexPath.row];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.row]);
}

@end
