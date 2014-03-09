//
//  FBUser.h
//  Paragraph
//
//  Created by Martin Ulianko on 08/03/14.
//  Copyright (c) 2014 Martin Ulianko. All rights reserved.
//

#import "MUJSONResponseSerializer.h"
#import "FBWork.h"

@interface FBUser : MUJSONResponseObject

@property (nonatomic, strong) NSString *ident;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSURL *link;

// array of FBWork objects
@property (nonatomic, strong) NSArray *work;

@property (nonatomic, strong) NSString *gender;
@property (nonatomic) NSInteger timezone;
@property (nonatomic, strong) NSString *locale;
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic, strong) NSDate *updatedTime;
@property (nonatomic, strong) NSString *username;

@end

//{
//    "id": "1202976606",
//    "name": "Martin Ulianko",
//    "first_name": "Martin",
//    "last_name": "Ulianko",
//    "link": "https://www.facebook.com/martin.ulianko",
//    "work": [
//             {
//                 "employer": {
//                     "id": "173601575994797",
//                     "name": "INeed.sk - this app for my iPhone"
//                 },
//                 "location": {
//                     "id": "110507998976900",
//                     "name": "Bratislava, Slovakia"
//                 },
//                 "position": {
//                     "id": "141108969235368",
//                     "name": "iOS Developer"
//                 },
//                 "start_date": "0000-00"
//             },
//             {
//                 "employer": {
//                     "id": "511617982249539",
//                     "name": "Analytica Design"
//                 },
//                 "location": {
//                     "id": "110507998976900",
//                     "name": "Bratislava, Slovakia"
//                 },
//                 "position": {
//                     "id": "103146756409401",
//                     "name": "PHP Developer"
//                 },
//                 "start_date": "0000-00",
//                 "end_date": "0000-00"
//             },
//             {
//                 "employer": {
//                     "id": "106217156104891",
//                     "name": "ZlavaDna.sk"
//                 }
//             }
//             ],
//    "education": [
//                  {
//                      "school": {
//                          "id": "106008326106704",
//                          "name": "SP\u0160 Jozefa Murga\u0161a"
//                      },
//                      "type": "High School"
//                  },
//                  {
//                      "school": {
//                          "id": "149182091780858",
//                          "name": "FIIT STU"
//                      },
//                      "type": "College"
//                  },
//                  {
//                      "school": {
//                          "id": "112168685468237",
//                          "name": "Slovensk\u00e1 Technick\u00e1 Univerzita"
//                      },
//                      "type": "College"
//                  }
//                  ],
//    "gender": "male",
//    "timezone": 1,
//    "locale": "en_US",
//    "verified": true,
//    "updated_time": "2013-12-15T22:40:25+0000",
//    "username": "martin.ulianko"
//}
