//
//  RCPublicServiceListViewController.h
//  RongIMKit
//
//  Created by litao on 15/4/20.
//  Copyright (c) 2015年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCPublicServiceListViewController : UITableViewController
@property (nonatomic, strong) NSArray *keys;
@property (nonatomic, strong) NSMutableDictionary *allFriends;
@property (nonatomic,strong) NSArray *allKeys;
@property (nonatomic,assign) BOOL hideSectionHeader;
@end
