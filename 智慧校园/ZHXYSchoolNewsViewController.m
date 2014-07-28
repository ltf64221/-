//
//  ZHXYSchoolNewsViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-28.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYSchoolNewsViewController.h"
#import "SchoolNewsDataSourceAndDelegate.h"

@interface ZHXYSchoolNewsViewController ()
@property (strong, nonatomic) SchoolNewsDataSourceAndDelegate *schoolNewsDelegate;

@end

@implementation ZHXYSchoolNewsViewController
@synthesize schoolNewsDelegate = _schoolNewsDelegate;
@synthesize schoolNewsTableView = _schoolNewsTableView;
@synthesize schoolInfoSegmentedControl = _schoolInfoSegmentedControl;


- (SchoolNewsDataSourceAndDelegate *)schoolNewsDelegate{
    if (!_schoolNewsDelegate) {
        _schoolNewsDelegate = [[SchoolNewsDataSourceAndDelegate alloc] init];
    }
    return _schoolNewsDelegate;
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
    self.schoolNewsTableView.dataSource = self.schoolNewsDelegate;
    self.schoolNewsTableView.delegate = self.schoolNewsDelegate;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
