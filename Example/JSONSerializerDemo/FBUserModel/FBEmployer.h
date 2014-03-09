//
//  FBEmployer.h
//
//  Created by Martin Ulianko on 09/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "MUJSONResponseSerializer.h"

@interface FBEmployer : MUJSONResponseObject

@property (nonatomic, strong) NSString *ident;
@property (nonatomic, strong) NSString *name;
@end
