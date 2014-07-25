//
//  WebSeviceSopaRequest.h
//  智慧校园
//
//  Created by Akson on 14-7-25.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface WebSeviceSopaRequest : NSObject<NSURLConnectionDelegate>

- (BOOL)sopaRequestUrl:(NSString *)baseUrl UserName:(NSString *)userName Password:(NSString *)password PID:(NSInteger)pid;
@property (nonatomic, strong) NSMutableData *webDate;
@end
