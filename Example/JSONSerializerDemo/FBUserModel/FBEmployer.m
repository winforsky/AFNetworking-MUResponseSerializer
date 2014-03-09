//
//  FBEmployer.m
//  Paragraph
//
//  Created by Martin Ulianko on 09/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "FBEmployer.h"

@implementation FBEmployer

- (instancetype)init
{
    if(self = [super init])
    {
        self.propertyMap = @{@"id": @"ident"};
    }
    return self;
}

@end
