//
//  WebSeviceSopaRequest.m
//  智慧校园
//
//  Created by Akson on 14-7-25.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "WebSeviceSopaRequest.h"

@implementation WebSeviceSopaRequest
@synthesize webDate = _webDate;

- (NSMutableData *)webDate{
    if (!_webDate) {
        _webDate = [[NSMutableData alloc]init];
    }
    return _webDate;
}

- (BOOL)sopaRequestUrl:(NSString *)baseUrl UserName:(NSString *)userName Password:(NSString *)password PID:(NSInteger)pid
{
   /* NSString *soapMessage = [NSString stringWithFormat:
                             @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
                             "<soap:Envelope"
                             "xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\""
                             "xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\""
                             "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
                             "<soap:Body>\n"
                             "<loginAuth xmlns=\"http://us.webservice.remoting.ebo.ejt.com\">\n"
                             "<in0>%@</in0>\n"
                             "<in1>%@</in1>\n"
                             "<in2>%@</in2>\n"
                             "</loginAuth>\n"
                             "</soap:Body>\n"
                             "</soap:Envelope>\n",userName,password,@(pid)];
    
    
    NSString *soapMessage = [NSString stringWithFormat:
    @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
    "<soap12:Envelope"
    "xmlns:soap12=\"http://www.w3.org/2003/05/soap-envelope\""
    "xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\""
    "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
    "<soap12:Body>\n"
    "<loginAuth xmlns=\"http://218.23.98.46/\">\n"
    "<in0>liutianfu</in0>\n"
    "<in1>111111</in1>\n"
    "<in2>1</in2>\n"
    "</loginAuth>\n"
    "</soap12:Body>\n"
    "</soap12:Envelope>\n"];
    
    */

#if 1
   NSString *soapMessage = [NSString stringWithFormat:
                             @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
                             "<soap12:Envelope"
                            "targetNamespace=\"http://us.webservice.remoting.ebo.ejt.com\""
                            "xmlns:wsdl=\"http://schemas.xmlsoap.org/wsdl/\""
                            "xmlns:soap12=\"http://www.w3.org/2003/05/soap-envelope\""
                            "xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\""
                            "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
                             "<soap12:Body>\n"
                             "<loginAuth xmlns=\"http://218.23.98.46/\">\n"
                            "<in0>liutianfu</in0>\n"
                            "<in1>111111</in1>\n"
                             "<in2>1</in2>\n"
                             "</loginAuth>\n"
                             "</soap12:Body>\n"
                             "</soap12:Envelope>\n"];
#else
    NSString *soapMessage = [NSString stringWithFormat:
                         @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
                         "<soap12:Envelope "
                         "xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "
                         "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" "
                         "xmlns:soap12=\"http://www.w3.org/2003/05/soap-envelope\">"
                         "<soap12:Body>"
                         "<getMobileCodeInfo xmlns=\"http://WebXml.com.cn/\">"
                         "<mobileCode>%@</mobileCode>"
                         "<userID>%@</userID>"
                         "</getMobileCodeInfo>"
                         "</soap12:Body>"
                         "</soap12:Envelope>", @(18019959203), @""];
    
#endif
#if 0
    // 创建URL，内容是前面的请求报文报文中第二行主机地址加上第一行URL字段
    NSURL *url = [NSURL URLWithString: @"http://webservice.webxml.com.cn/WebServices/MobileCodeWS.asmx"];

    //请求发送到的路径
    NSMutableURLRequest *theRequest = [NSMutableURLRequest requestWithURL:url];
#else
    NSMutableURLRequest *theRequest = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:baseUrl]];
#endif
    NSString *msgLength = [NSString stringWithFormat:@"%d",[soapMessage length]];
    //以下对请求信息添加属性前四句是必有的，第五句是soap信息。
    [theRequest addValue: @"application/soap+xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
//    [theRequest addValue: @"text/xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
//    [theRequest addValue: @"http://218.23.98.46/services/loginAuth" forHTTPHeaderField:@"sopaAction"];
    [theRequest addValue: msgLength forHTTPHeaderField:@"Content-Length"];

    [theRequest setHTTPMethod:@"POST"];
    [theRequest setHTTPBody: [soapMessage dataUsingEncoding:NSUTF8StringEncoding]];
    
    //请求
    NSURLConnection *conn = [[NSURLConnection alloc] initWithRequest:theRequest delegate:self];
    if (conn) {
        return YES;
    }
    else
    {
        return NO;
    }

}

// 每接收到一部分数据就追加到webData中
-(void) connection:(NSURLConnection *)connection didReceiveData:(NSData *) data {
    [self.webDate appendData:data];
}

// 出现错误时
-(void) connection:(NSURLConnection *)connection didFailWithError:(NSError *) error {
    
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示"
                                                    message:[NSString stringWithFormat:@"请求数据超时!"]
                                                   delegate:self
                                          cancelButtonTitle:@"确定"
                                          otherButtonTitles: nil];
    [alert show];
}

// 完成接收数据时调用
-(void) connectionDidFinishLoading:(NSURLConnection *) connection {

    NSString *response = [[NSString alloc] initWithData:self.webDate encoding:NSUTF8StringEncoding];
    NSLog(@"%@",response);
    
}

@end
