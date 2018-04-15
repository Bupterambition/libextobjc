//
//  kZMoonNetworkCommandProtocol.h
//  Pods
//
//  Created by Senmiao on 2016/12/13.
//
//

#import <Foundation/Foundation.h>
#import <kZMoonCommand/kZMoonCommandPublicHeader.h>
#import "kZMoonNetworkCommand.h"
NS_ASSUME_NONNULL_BEGIN

@protocol kZMoonNetworkCommandProtocol <kZMoonCommand>

@property (nonatomic, strong, readonly) NSDictionary *param;

@property (nonatomic, assign, readonly) YTKRequestMethod method;

- (id <kZMoonNetworkCommandProtocol>(^)(YTKRequestMethod))setMethod;

- (id <kZMoonNetworkCommandProtocol>(^)(NSDictionary *))setParams;

+ (instancetype)createWithRequestInitBlock:(kZMoonNetworkRequestInitBlock)block withReturnClass:(Class)returnClass;

+ (instancetype)createWithApiName:(NSString *)api withReturnClass:(Class)returnClass;

- (id<kZMoonCancelable>)executeWithParams:(nullable NSDictionary *)params andCompletion:(kZMoonNetworkCommandExcuteCallBackBlock)completionBlk withGet:(BOOL)get;

@end
NS_ASSUME_NONNULL_END
