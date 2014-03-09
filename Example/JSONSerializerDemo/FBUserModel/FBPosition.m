//
//  FBPosition.m
//  Paragraph
//
//  Created by Martin Ulianko on 09/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "FBPosition.h"

@implementation FBPosition

- (instancetype)init
{
    if(self = [super init])
    {
        self.propertyMap = @{@"id": @"ident"};
    }
    return self;
}

@end
