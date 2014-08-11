//
//  ZHXYUserLogViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYUserLogViewController.h"
#import "ZHXYSelectClassViewController.h"
#import "ZHXYHomePageTabBarController.h"
#import "ZHXYAppDelegate.h"
#import "UserWS.h"
#import "SBJsonBase.h"
#import "JSON.h"

//static  NSString * const baseUrlString = @"http://218.23.98.46/timeep/services/UserWS?wsdl";

@interface ZHXYUserLogViewController () <UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UIButton *checkBoxBtn;
@property (strong, nonatomic) IBOutlet UITextField *userName;
@property (strong, nonatomic) IBOutlet UITextField *password;


@property (nonatomic) BOOL checkBoxBtnState;
@property (nonatomic, strong)NSUserDefaults *saveUserNameAndPassword;
@property (nonatomic, strong) NSMutableArray *returnDataArray;
@property (nonatomic, strong) NSMutableArray *findRealClassArray;

@end

@implementation ZHXYUserLogViewController
@synthesize userName = _userName;
@synthesize password = _password;
@synthesize checkBoxBtnState = _checkBoxBtnState;
@synthesize saveUserNameAndPassword = _saveUserNameAndPassword;
@synthesize userLogInfoBlock = _userLogInfoBlock;
@synthesize checkBoxBtn = _checkBoxBtn;

@synthesize returnDataArray = _returnDataArray;
@synthesize findRealClassArray = _findRealClassArray;

- (NSMutableArray *)findRealClassArray{
    if (!_findRealClassArray) {
        _findRealClassArray = [NSMutableArray arrayWithCapacity:1];
    }
    return _findRealClassArray;
}

- (UIButton *)checkBoxBtn{
    if (!_checkBoxBtn) {
        _checkBoxBtn = [[UIButton alloc] init];
    }
    return _checkBoxBtn;
}

- (NSMutableArray *)returnDataArray{
    if (!_returnDataArray) {
        _returnDataArray = [NSMutableArray arrayWithCapacity:1];
    }
    return _returnDataArray;
}

- (NSUserDefaults *)saveUserNameAndPassword{
    if (!_saveUserNameAndPassword) {
        _saveUserNameAndPassword = [NSUserDefaults standardUserDefaults];
    }
    return _saveUserNameAndPassword;
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
    [self.navigationController setNavigationBarHidden:YES];
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.userName.delegate = self;
    self.password.delegate = self;
    if ([self.saveUserNameAndPassword boolForKey:@"checkBoxState"] == YES) {
        [self.checkBoxBtn setImage:[UIImage imageNamed:@"checkbox_true.png"] forState:UIControlStateNormal];
        self.checkBoxBtnState = [self.saveUserNameAndPassword boolForKey:@"checkBoxState"];
        self.userName.text = [self.saveUserNameAndPassword stringForKey:@"userName"];
        self.password.text = [self.saveUserNameAndPassword stringForKey:@"userPassword"];
    }else{
         [self.checkBoxBtn setImage:[UIImage imageNamed:@"checkbox_false.png"] forState:UIControlStateNormal];
    }
    
}


- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    [textField resignFirstResponder];
    return YES;
}

#pragma mark - LogButton
- (IBAction)userLogBtn:(UIButton *)sender {
    
    [self.userName resignFirstResponder];
    [self.password resignFirstResponder];//![self.userName.text isEqual: @""] && ![self.password.text isEqual: @""]

    
    if (![self.userName.text isEqual: @""] && ![self.password.text isEqual: @""]) {
        SBJsonParser *jsonParaser = [[SBJsonParser alloc] init];
        UserWSHttpBinding *binding = [UserWS UserWSHttpBinding];
        binding.logXMLInOut = YES;
        UserWS_loginAuth *UserLogRequest = [[UserWS_loginAuth alloc] init];
        UserLogRequest.in0 = self.userName.text;
        UserLogRequest.in1 = self.password.text;
        UserLogRequest.in2 = @"1";
        UserWSHttpBindingResponse *UserLogResponse = [binding loginAuthUsingParameters:UserLogRequest];
        
        if ([UserLogResponse.error localizedDescription]) {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示"
                                                            message:@"网络未连接"
                                                           delegate:self
                                                  cancelButtonTitle:@"确定"
                                                  otherButtonTitles: nil];
            [alert show];
        }else{
            if (self.checkBoxBtnState == YES) {
                [self.saveUserNameAndPassword setObject:self.userName.text forKey:@"userName"];
                [self.saveUserNameAndPassword setObject:self.password.text forKey:@"userPassword"];
                [self.saveUserNameAndPassword setBool:self.checkBoxBtnState forKey:@"checkBoxState"];
                [self.saveUserNameAndPassword synchronize];
            }
            
            for(id mine in UserLogResponse.bodyParts)
            {
                if([mine isKindOfClass:[UserWS_loginAuthResponse class]])
                {
                    UserWS_loginAuthResponse *responseBodyParts = (UserWS_loginAuthResponse *)mine;
                    self.returnDataArray = [jsonParaser objectWithString:responseBodyParts.out_];
                    NSLog(@"returnDataArray:%@",self.returnDataArray);
                }
            }
            if (!self.returnDataArray[0][@"msg"]) {
                
                if ([self.returnDataArray[0][@"userType"] integerValue] == 4) {
                    
                    ZHXYSelectClassViewController *selectClassViewController = [[ZHXYSelectClassViewController alloc]init];
                    
                    self.userLogInfoBlock = ^(NSMutableArray *_data){
                        selectClassViewController.userLogDataMutableArray = _data;
                    };                    
                    self.userLogInfoBlock(self.returnDataArray);
                    
                    UserWS_findRealClassInfoByUserId  *findReadClassInfoRequest = [[UserWS_findRealClassInfoByUserId alloc] init];
                    findReadClassInfoRequest.in0 = self.returnDataArray[0][@"userId"];
                    findReadClassInfoRequest.in1 = self.returnDataArray[0][@"childId"];
                    UserWSHttpBindingResponse *findReadClassResponse = [binding findRealClassInfoByUserIdUsingParameters:findReadClassInfoRequest];
                    for(id mine in findReadClassResponse.bodyParts)
                    {
                        if([mine isKindOfClass:[UserWS_findRealClassInfoByUserIdResponse class]])
                        {
                            UserWS_findRealClassInfoByUserIdResponse *responseBodyParts = (UserWS_findRealClassInfoByUserIdResponse *)mine;
                            self.findRealClassArray = [jsonParaser objectWithString:responseBodyParts.out_];
                            NSLog(@"返回:%@",self.findRealClassArray);
                        }
                    }
                    
                    
                    
                    ZHXYAppDelegate *delegate = [UIApplication sharedApplication].delegate;
                    delegate.window.rootViewController = selectClassViewController;
                    [delegate.window reloadInputViews];
                }else{

                    ZHXYHomePageTabBarController *homeTabBarController = [[ZHXYHomePageTabBarController alloc]init];

                    ZHXYAppDelegate *delegate = [UIApplication sharedApplication].delegate;
                    delegate.window.rootViewController = homeTabBarController;
                    [delegate.window reloadInputViews];

                }
                
            }else{
                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示"
                                                                message:self.returnDataArray[0][@"msg"]
                                                               delegate:self
                                                      cancelButtonTitle:@"确定"
                                                      otherButtonTitles: nil];
                [alert show];
            }
            
        }

    }else{
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示"
                                                        message:@"用户名或密码不能为空"
                                                       delegate:self
                                              cancelButtonTitle:@"确定"
                                              otherButtonTitles: nil];
        [alert show];
    }



    
}

#pragma mark - checkBoxButton method
- (IBAction)checkBoxBtn:(UIButton *)sender {
    if (!self.checkBoxBtnState) {
        [sender setImage:[UIImage imageNamed:@"checkbox_true.png"] forState:UIControlStateNormal];
        self.checkBoxBtnState = YES;
    }else{
        [sender setImage:[UIImage imageNamed:@"checkbox_false.png"] forState:UIControlStateNormal];
        self.checkBoxBtnState = NO;
    }
}

@end
