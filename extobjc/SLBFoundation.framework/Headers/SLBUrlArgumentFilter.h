//
//  SLBUrlArgumentFilter.h
//  Pods
//
//  Created by Senmiao on 2017/2/28.
//
//

#import <Foundation/Foundation.h>
#import <YTKNetwork/YTKNetwork.h>

@interface SLBUrlArgumentFilter : NSObject<YTKUrlFilterProtocol>
+ (SLBUrlArgumentFilter *)filterWithArguments:(NSDictionary *)arguments;

- (NSString *)filterUrl:(NSString *)originUrl withRequest:(YTKBaseRequest *)request;
@end
