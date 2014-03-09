//
//  FBWork.m
//  Paragraph
//
//  Created by Martin Ulianko on 08/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "FBWork.h"

@implementation FBWork

@synthesize employer = _employer;

- (instancetype)init
{
    if(self = [super init])
    {
        self.propertyMap = @{@"start_date": @"startDate",
                             @"emd_name":   @"firstName"};
    }
    return self;
}

- (void)setEmployer:(FBEmployer *)employer
{
    _employer = employer;
}

@end
