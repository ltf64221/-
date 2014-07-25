//
//  ZHXYUserLogViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYUserLogViewController.h"
#import "AFNetworkReachabilityManager.h"
#import "AFNetworking.h"
#import "ZHXYSelectClassViewController.h"
#import "WebSeviceSopaRequest.h"

static  NSString * const baseUrlString = @"http://218.23.98.46/timeep/services/UserWS";

@interface ZHXYUserLogViewController () <UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UILabel *userLogLabel;
@property (strong, nonatomic) IBOutlet UITextField *userName;
@property (strong, nonatomic) IBOutlet UITextField *password;

@property (strong, nonatomic) IBOutlet UILabel *rememberPasswordLabel;
@property (nonatomic) BOOL checkBoxBtnState;
@property (strong, nonatomic) IBOutlet UILabel *descriptionErrorInformationLable;
@property (nonatomic, strong)NSUserDefaults *backUpUser;
@property (nonatomic) BOOL netWorkStatue;
@end

@implementation ZHXYUserLogViewController
@synthesize userLogLabel = _userLogLabel;
@synthesize rememberPasswordLabel = _rememberPasswordLabel;
@synthesize userName = _userName;
@synthesize password = _password;
@synthesize checkBoxBtnState = _checkBoxBtnState;
@synthesize descriptionErrorInformationLable = _descriptionErrorInformationLable;
@synthesize backUpUser = _backUpUser;
@synthesize netWorkStatue = _netWorkStatue;

- (NSUserDefaults *)backUpUser{
    if (!_backUpUser) {
        _backUpUser = [NSUserDefaults standardUserDefaults];
    }
    return _backUpUser;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {

    }
    return self;
}
-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.descriptionErrorInformationLable.hidden = YES;
    [self.navigationController setNavigationBarHidden:YES];
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.userName.delegate = self;
    self.password.delegate = self;
    // Do any additional setup after loading the view from its nib.
}


- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    [textField resignFirstResponder];
    return YES;
}

#pragma mark - LogButton
- (IBAction)userLogBtn:(UIButton *)sender {
    [self.userName resignFirstResponder];
    [self.password resignFirstResponder];

    if (![self.userName.text isEqual: @""] && ![self.password.text isEqual: @""]) {
        self.descriptionErrorInformationLable.hidden = YES;
       WebSeviceSopaRequest *sopaRequest = [[WebSeviceSopaRequest alloc]init];
        self.netWorkStatue = [sopaRequest sopaRequestUrl:baseUrlString UserName:@"liutianfu" Password:@"111111" PID:1];
        if (self.netWorkStatue) {
            if (self.checkBoxBtnState) {
                [self.backUpUser setObject:self.password.text forKey:self.userName.text];
                [self.backUpUser synchronize];
            }
            [self.navigationController pushViewController:[[ZHXYSelectClassViewController alloc]init] animated:NO];
        }else{
            if (![self isNetWorkReachable]) {
                self.descriptionErrorInformationLable.hidden = NO;
                [self.view addSubview:self.descriptionErrorInformationLable];
                
                [self performSelector:@selector(errorInfoDisappear) withObject:nil afterDelay:3];
            }
        }
        
    }
    else{
        //UILabel
        self.descriptionErrorInformationLable.hidden = NO;
        self.descriptionErrorInformationLable.text = @"用户名或密码不能为空";
        [self.view addSubview:self.descriptionErrorInformationLable];
        
        [self performSelector:@selector(errorInfoDisappear) withObject:nil afterDelay:3];
    }
    
}

- (BOOL)isNetWorkReachable
{
    AFNetworkReachabilityManager *afNetworkReachabilityManager = [AFNetworkReachabilityManager sharedManager];
    [afNetworkReachabilityManager startMonitoring]; //network watch
    [afNetworkReachabilityManager setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status) {
        
        switch (status) {
            case AFNetworkReachabilityStatusNotReachable:{
                self.descriptionErrorInformationLable.text = @"网络未连接";
                [self performSelector:@selector(errorInfoDisappear) withObject:nil afterDelay:3];
                break;
            }
            default:
                break;
        }
        
    }];
    return [AFNetworkReachabilityManager sharedManager].isReachable;
}

- (void)errorInfoDisappear{
    self.descriptionErrorInformationLable.hidden = YES;
}

#pragma mark - checkBoxButton method
- (IBAction)checkBoxBtn:(UIButton *)sender {
    if (!self.checkBoxBtnState) {
        [sender setImage:[UIImage imageNamed:@"checkbox1_checked@2x.png"] forState:UIControlStateNormal];
        self.checkBoxBtnState = YES;
    }else{
        [sender setImage:[UIImage imageNamed:@"checkbox1_unchecked@2x.png"] forState:UIControlStateNormal];
        self.checkBoxBtnState = NO;
    }
}

@end
