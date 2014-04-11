//
//  NSManagedObject+JSONInit.h
//  Paragraph
//
//  Created by Martin Ulianko on 09/04/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import <CoreData/CoreData.h>
@interface NSManagedObject (MUResponseObject)

- (NSManagedObject *)initWithContext:(NSManagedObjectContext *)context;
@end
