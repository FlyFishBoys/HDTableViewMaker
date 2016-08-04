//
//  UITableViewCell+HDTableViewDataSource.h
//  wash4b
//
//  Created by 洪东 on 7/20/16.
//  Copyright © 2016 abnerh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (HDTableViewMaker)
@property (nonatomic,weak) UITableView *tableView;

@property (nonatomic, strong) NSIndexPath *indexPath;

- (void)reloadRow:(UITableViewRowAnimation)animation;

@end
