//
//  ALEvent.h
//  LakesKraken
//
//  Created by DetroitLabsUser on 7/16/14.
//  Copyright (c) 2014 DetroitLabsUser. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ALEvent : NSObject

@property (nonatomic, strong) NSString *startTime;
@property (nonatomic, strong) NSString *eventDescription;
@property (nonatomic, strong) NSString *endTime;
@property (nonatomic, strong) NSString *siteLocation;
@property (nonatomic, strong) NSString *eventName;
@property (nonatomic, retain) NSMutableArray *resultsArray;
@property (nonatomic, strong) NSString *days;
@property (nonatomic) BOOL freeFood;


@end
