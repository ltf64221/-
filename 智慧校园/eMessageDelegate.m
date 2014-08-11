//
//  eMessageDelegate.m
//  智慧校园
//
//  Created by Akson on 14-8-5.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "eMessageDelegate.h"

@implementation eMessageDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 4;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *indentifier = @"eMessageCell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:indentifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:indentifier];
    }
    cell.imageView.image = [UIImage imageNamed:@"Expression_4@2x.png"];
    cell.textLabel.text = [NSString stringWithFormat:@"indexPath_row:%d", indexPath.row];
    cell.detailTextLabel.text = @"123";
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.row]);
}
@end
