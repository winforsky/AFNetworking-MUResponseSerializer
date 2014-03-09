AFNetworking-MUJSONResponseSerializer
=====================================

Automatically serialize JSON response to your object model. 

# Usage

### AFNetworking

````
AFHTTPRequestOperationManager *operationManager = [[AFHTTPRequestOperationManager alloc] initWithBaseURL:[NSURL URLWithString:@"https://graph.facebook.com/"]];
[operationManager setResponseSerializer:[[MUJSONResponseSerializer alloc] init]];
[(MUJSONResponseSerializer *)[operationManager responseSerializer] setResponseObjectClass:[FBUser class]];

[operationManager GET:@"me" 
		   parameters:nil
              success:^(AFHTTPRequestOperation *operation, id responseObject) 
{                                                
 	// response object is your FBUser object with all properties filled   
} 			  failure:^(AFHTTPRequestOperation *operation, NSError *error){}];