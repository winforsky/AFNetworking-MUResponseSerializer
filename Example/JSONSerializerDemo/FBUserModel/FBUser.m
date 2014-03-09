//
//  FBUser.m
//  Paragraph
//
//  Created by Martin Ulianko on 08/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "FBUser.h"

@implementation FBUser

- (instancetype)init
{
    if(self = [super init])
    {
        self.propertyMap = @{@"id":         @"ident",
                             @"first_name": @"firstName",
                             @"last_name":  @"lastName",
                             @"updated_time": @"updatedTime"};
    }
    return self;
}

- (Class)classForElementsInArrayProperty:(NSString *)propertyName
{
    return [FBWork class];
}

@end