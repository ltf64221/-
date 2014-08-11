//
//  ZHXYEducationCenterViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYEducationCenterViewController.h"
#import "CCSegmentedControl.h"

@interface ZHXYEducationCenterViewController ()
@property (nonatomic, strong) CCSegmentedControl *EducationCenterSegmentedControl;

@end

@implementation ZHXYEducationCenterViewController
@synthesize EducationCenterSegmentedControl = _EducationCenterSegmentedControl;

-(CCSegmentedControl *)EducationCenterSegmentedControl{
    if (!_EducationCenterSegmentedControl) {
        
        _EducationCenterSegmentedControl = [[CCSegmentedControl alloc] initWithItems:@[@"花名册",@"课程表",@"学生成绩",@"学生评语",@"通讯录"]];
        _EducationCenterSegmentedControl.frame = CGRectMake(0, StateAndNavigatonHight,ScreenWidth, EducationCenterSegmentedControlHight);
        _EducationCenterSegmentedControl.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"segment_bg.png"]];
        _EducationCenterSegmentedControl.backgroundImage = [UIImage imageNamed:@"segment_bg.png"];
        _EducationCenterSegmentedControl.selectedStainView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"stain.png"]];
        _EducationCenterSegmentedControl.selectedSegmentTextColor = [UIColor redColor];
    }
    return _EducationCenterSegmentedControl;
}

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
    [self.view addSubview:self.EducationCenterSegmentedControl];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
