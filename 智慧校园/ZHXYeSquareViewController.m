//
//  ZHXYeSquareViewController.m
//  智慧校园
//
//  Created by Akson on 14-7-21.
//  Copyright (c) 2014年 liutianfu. All rights reserved.
//

#import "ZHXYeSquareViewController.h"
#import "eMessageViewController.h"
#import "eMessageDelegate.h"
#import "MyCircleDataDelegate.h"
#import "MyCircleTitleTableViewCell.h"
#import "MyCircleContentTableViewCell.h"
#import "CCSegmentedControl.h"

@interface ZHXYeSquareViewController ()<UITableViewDataSource,UITableViewDelegate>
@property (nonatomic, strong) CCSegmentedControl *eSquareSegmentedControl;
@property (nonatomic, strong) eMessageDelegate *eMessageDataDelegate;
@property (nonatomic, strong) MyCircleDataDelegate *myCircleDelegate;
@property (nonatomic) BOOL openContentCell;
@property (nonatomic, strong) NSArray *cellNameArray;
@end

@implementation ZHXYeSquareViewController
@synthesize eSquareSegmentedControl = _eSquareSegmentedControl;
@synthesize eMessageDataDelegate = _eMessageDataDelegate;
@synthesize myCircleDelegate = _myCircleDelegate;

@synthesize eMessageTableView = _eMessageTableView;
@synthesize myCircleTableView = _myCircleTableView;

@synthesize cellNameArray = _cellNameArray;

- (MyCircleDataDelegate *)myCircleDelegate{
    if (!_myCircleDelegate) {
        _myCircleDelegate = [[MyCircleDataDelegate alloc] init];
    }
    return _myCircleDelegate;
}

- (eMessageDelegate *)eMessageDataDelegate{
    if (!_eMessageDataDelegate) {
        _eMessageDataDelegate = [[eMessageDelegate alloc] init];
    }
    return _eMessageDataDelegate;
}

- (CCSegmentedControl *)eSquareSegmentedControl{
    if (!_eSquareSegmentedControl) {
        _eSquareSegmentedControl = [[CCSegmentedControl alloc] initWithItems:@[@"e博广场",@"我的e博",@"我的圈子",@"我的e信"]];
        _eSquareSegmentedControl.frame = CGRectMake(0, StateAndNavigatonHight,ScreenWidth, eSquareSegmentedControlHight);
        _eSquareSegmentedControl.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"segment_bg.png"]];
        _eSquareSegmentedControl.backgroundImage = [UIImage imageNamed:@"segment_bg.png"];
        _eSquareSegmentedControl.selectedStainView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"stain.png"]];
        _eSquareSegmentedControl.selectedSegmentTextColor = [UIColor redColor];
    }
    return _eSquareSegmentedControl;
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
    self.eSquareSegmentedControl.selectedSegmentIndex = 0;
    [self.eSquareSegmentedControl addTarget:self action:@selector(eSquareSegmentedAction:) forControlEvents:UIControlEventValueChanged];
    [self.view addSubview:self.eSquareSegmentedControl];
    
    self.myeTwitterView.frame =
    CGRectMake(0, StateAndNavigatonHight + eSquareSegmentedControlHight, ScreenWidth, MainHeight - eSquareSegmentedControlHight);
    
    self.myCircleView.frame = self.myeTwitterView.frame;
    self.e_MessageView.frame = self.myeTwitterView.frame;
    self.eSquareView.frame = self.myeTwitterView.frame;
    
    [self.view addSubview:self.myeTwitterView];
    [self.view addSubview:self.myCircleView];
    [self.view addSubview:self.e_MessageView];
    [self.view addSubview:self.eSquareView];
    
    self.eMessageTableView.dataSource = self.eMessageDataDelegate;
    self.eMessageTableView.delegate = self.eMessageDataDelegate;
    self.myCircleTableView.dataSource = self;//self.myCircleDelegate;
    self.myCircleTableView.delegate = self;//self.myCircleDelegate;
    

}

- (void)eSquareSegmentedAction:(UISegmentedControl *)sender {
    
    NSLog(@"%d",self.eSquareSegmentedControl.selectedSegmentIndex);
    
    [self.eSquareView setHidden:YES];
    [self.myCircleView setHidden:YES];
    [self.e_MessageView setHidden:YES];
    [self.myeTwitterView setHidden:YES];
    
    switch (self.eSquareSegmentedControl.selectedSegmentIndex) {
        case 0:
            [self.eSquareView setHidden:NO];
            [self.view bringSubviewToFront:self.eSquareView];
            break;
        case 1:
            [self.myeTwitterView setHidden:NO];
            [self.view bringSubviewToFront:self.myeTwitterView];
            break;
        case 2:
            [self.myCircleView setHidden:NO];
            [self.view bringSubviewToFront:self.myCircleView];
            break;
        case 3:
            [self.e_MessageView setHidden:NO];
            [self.view bringSubviewToFront:self.e_MessageView];
            break;
        default:
            break;
    }
}
- (IBAction)eSendBtn:(UIButton *)sender {
    [self.navigationController pushViewController:[[eMessageViewController alloc] init] animated:YES];
}

//- (BOOL)openContentCell{
//    return NO;
//}
//- (void)setOpenContentCell:(BOOL)openContentCell
//{
//    openContentCell = NO;
//}

- (NSArray *)cellNameArray{
    if (!_cellNameArray) {
        _cellNameArray = @[@"朋友圈",@"时代e博初中老师圈",@"2013年七年级2班老师圈",@"2013年七年级2班家长圈",@"2013年七年级2班学生圈"];
    }
    return _cellNameArray;
}

//- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
//{
//    return 5;
//}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (self.openContentCell) {
        return 2;
    }
    return 2;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"MyCircleCell";
    if (indexPath.section == 0) {
        if (indexPath.row == 0) {
            MyCircleTitleTableViewCell *cell = (MyCircleTitleTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleTitleTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                cell.myCircleTitleLable.text = self.cellNameArray[indexPath.section];
            }
            return cell;
        }
        else
        {
            if (indexPath.row == 1) {
                MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
                if (!cell) {
                    NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                    cell = array[0];
                    [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                    
                }
                return cell;
             }
            
            
        }
        

    }
    if (indexPath.section == 1) {
        if (indexPath.row == 0) {
            MyCircleTitleTableViewCell *cell = (MyCircleTitleTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleTitleTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                cell.myCircleTitleLable.text = self.cellNameArray[indexPath.section];
            }
            return cell;
        }
        else
        {
            if (indexPath.row == 1) {
                MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
                if (!cell) {
                    NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                    cell = array[0];
                    [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                    
                }
                return cell;
            }
            
            
        }
        
        
    }

    return nil;
    /*
    MyCircleTitleTableViewCell *cell = (MyCircleTitleTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (!cell) {
        NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleTitleTableViewCell" owner:self options:nil];
        cell = array[0];
        [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
        cell.myCircleTitleLable.text = self.cellNameArray[indexPath.section];
    }
    
#if 1
    if (indexPath.section == 0) {
        
        if (indexPath.row == 1 && self.openContentCell) {
            MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                
            }
        }
        
    }
    if (indexPath.section == 1) {
        
        if (indexPath.row == 1 && self.openContentCell) {
            MyCircleContentTableViewCell *cell = (MyCircleContentTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
            if (!cell) {
                NSArray *array = [[NSBundle mainBundle] loadNibNamed:@"MyCircleContentTableViewCell" owner:self options:nil];
                cell = array[0];
                [cell setSelectionStyle:UITableViewCellSelectionStyleGray];
                
            }
        }
        
        
        return cell;
    }
    
#endif
    
    return cell;
     */
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{

    if (indexPath.section == 0) {
        if (indexPath.row == 0) {
            self.openContentCell = YES;//(self.openContentCell?NO:YES);
        }
    }
    if (indexPath.section == 1) {
        if (indexPath.row == 0) {
            self.openContentCell = YES;//(self.openContentCell?NO:YES);
        }
    }
    if (self.openContentCell) {
            NSLog(@"%@", [NSString stringWithFormat:@"这是第:%d行", indexPath.section]);
        [self.myCircleTableView reloadData];
    }
    
}

@end
