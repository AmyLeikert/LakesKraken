//
//  ALSearchResultsViewController.h
//  LakesKraken
//
//  Created by DetroitLabsUser on 7/21/14.
//  Copyright (c) 2014 DetroitLabsUser. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ALFilterEvent.h"
#import "ALParseQuery.h"
#import "ALEvent.h"
#import "ALScheduleTableViewCell.h"

@interface ALSearchResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) ALFilterEvent *filterEvent;
@property (nonatomic, strong) IBOutlet UITableView *tableResults;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic, strong) IBOutlet UIView *barView;


-(void)setEvents:(NSArray *)events;
@end
