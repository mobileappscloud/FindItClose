//
//  FindTableViewController.h
//  FindItClose
//
//  Created by iMac on 7/13/14.
//  Copyright (c) 2014 CongenialApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FindTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, retain) NSMutableArray *placesArray;

@end
