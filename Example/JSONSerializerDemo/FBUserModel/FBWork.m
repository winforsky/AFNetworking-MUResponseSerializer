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

- (NSDictionary *)propertyMap
{
    return = @{@"start_date": @"startDate",
               @"emd_name":   @"firstName"};
}

- (void)setEmployer:(FBEmployer *)employer
{
    _employer = employer;
}

@end
