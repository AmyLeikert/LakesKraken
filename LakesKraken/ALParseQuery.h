//
//  ALParseQuery.h
//  LakesKraken
//
//  Created by DetroitLabsUser on 7/21/14.
//  Copyright (c) 2014 DetroitLabsUser. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALSearchResultsViewController.h"
#import <Parse/Parse.h>
#import "ALEvent.h"



@interface ALParseQuery : NSObject

@property (nonatomic, strong) NSMutableArray *eventArray;
@property (nonatomic, retain) ALEvent *event;



//-(NSArray*)parseTesting:(ALFilterEvent *)filterEvent;

//-(NSArray*)parse:(ALFilterEvent *)filterEvent;

-(NSArray*)fetchDataFromParse:(ALFilterEvent *)filterEvent;

@end
