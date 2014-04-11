AFNetworking-MUResponseSerializer
=====================================

Automatically serialize JSON response to your object model. It also work with Core Data NSManagedObjects.
It uses NSObject category <a href="https://github.com/Ulianko/NSObject-MUJSONMapping">NSObject-MUJSONMapping</a> for mapping JSON values to properties.

# Usage

### AFNetworking

```Objective-c
AFHTTPRequestOperationManager *operationManager = [[AFHTTPRequestOperationManager alloc] initWithBaseURL:[NSURL URLWithString:@"https://graph.facebook.com/"]];
[operationManager setResponseSerializer:[[MUJSONResponseSerializer alloc] initWithResponseClass:[FBUser class]]];

[operationManager GET:@"me" 
		   parameters:nil
              success:^(AFHTTPRequestOperation *operation, id responseObject) 
{                                                
 	// response object is your FBUser object with all properties filled   
} 			  failure:^(AFHTTPRequestOperation *operation, NSError *error){}];
```

### Installation with CocoaPods

[CocoaPods](http://cocoapods.org) is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries like AFNetworking in your projects. See the ["Cocoapod.org" guide for more information](http://cocoapods.org).

#### Podfile

```ruby
platform :ios, '7.0'
pod "AFNetworking-MUResponseSerializer"
```

## Contact

* [@MartinUlianko](https://twitter.com/MartinUlianko) on Twitter
* [@Ulianko](https://github.com/Ulianko) on Github
* <a href="mailTo:martin@ulianko.com">martin@ulianko.com</a>
