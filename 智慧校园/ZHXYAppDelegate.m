//
//  ZHXYAppDelegate.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYAppDelegate.h"
#import "ZHXYUserLogViewController.h"

@implementation ZHXYAppDelegate

@synthesize window = _window;


- (UIWindow *)window{
    if (!_window) {
        _window = [[UIWindow alloc]initWithFrame:[[UIScreen mainScreen]bounds]];
    }
    return _window;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    ZHXYUserLogViewController *userLogViewController = [[ZHXYUserLogViewController alloc] init];
    userLogViewController.view.backgroundColor = [UIColor whiteColor];
    self.window.rootViewController = userLogViewController;
    [self.window makeKeyAndVisible];
    return YES;
}

@end
