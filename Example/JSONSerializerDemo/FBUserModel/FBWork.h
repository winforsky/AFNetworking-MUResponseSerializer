//
//  FBWork.h
//  Paragraph
//
//  Created by Martin Ulianko on 08/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "MUJSONResponseSerializer.h"
#import "FBEmployer.h"
#import "FBLocation.h"
#import "FBPosition.h"

@interface FBWork : MUJSONResponseObject

@property (nonatomic, strong) FBEmployer *employer;
@property (nonatomic, strong) FBLocation *location;
@property (nonatomic, strong) FBPosition *position;
@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@end
