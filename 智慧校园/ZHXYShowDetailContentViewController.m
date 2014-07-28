//
//  ZHXYShowDetailContentViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-22.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYShowDetailContentViewController.h"

@interface ZHXYShowDetailContentViewController ()
@end

@implementation ZHXYShowDetailContentViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationItem.title = @"校园新闻";
  self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemFastForward target:self action:@selector(removeCurrentView)];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

- (void)removeCurrentView{
    [self.navigationController popViewControllerAnimated:YES];
}

@end
