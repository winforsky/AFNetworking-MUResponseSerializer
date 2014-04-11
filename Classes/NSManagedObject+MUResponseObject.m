//
//  NSManagedObject+JSONInit.m
//  Paragraph
//
//  Created by Martin Ulianko on 09/04/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "NSManagedObject+JSONInit.h"
#import <NSObject+MUJSONMapping.h>

@implementation NSManagedObject (MUResponseObject)

- (NSManagedObject *)initWithJSON:(id)JSON
{
    NSManagedObjectContext *context = nil; // get your context if you want, e.g. from singleton object
    
    if(self = [self initWithContext:context])
    {
        [self fillWithJSON:JSON];
    }
    
    return self;
}

- (NSManagedObject *)initWithContext:(NSManagedObjectContext *)context
{
    NSString *entityName = NSStringFromClass([self class]);
    NSEntityDescription *entity = [NSEntityDescription entityForName:entityName inManagedObjectContext:context];
    
    if(self = [self initWithEntity:entity insertIntoManagedObjectContext:context])
    {
        
    }
    
    return self;
}

@end
