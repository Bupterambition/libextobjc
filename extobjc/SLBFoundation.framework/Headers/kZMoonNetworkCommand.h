//
//  kZMoonNetworkCommand.h
//  Pods
//
//  Created by Senmiao on 2016/12/12.
//
//


#import <kZMoonCommand/kZMoonCommandPublicHeader.h>
#import <YTKNetwork/YTKNetwork.h>

NS_ASSUME_NONNULL_BEGIN

@protocol kZMoonNetworkCommandProtocol;

@interface kZMoonNetworkCommand<ReturnObjectType> : kZMoonCommand<kZMoonNetworkCommandProtocol>

typedef void(^kZMoonNetworkCommandExcuteCallBackBlock)(id <kZMoonCommand> command,__nullable ReturnObjectType returnObjc, NSError * _Nullable error);
typedef YTKBaseRequest * _Nullable (^kZMoonNetworkRequestInitBlock)(YTKBaseRequest * request);

@property (nonatomic, strong, readonly) YTKBaseRequest *innerRequest;

@property (nonatomic, strong, readonly) NSError *error;

/**
 Used for excuting an Network Operation.This method is the same with kZMoonNetworkCommandProtocol's Method just used for generic

 @param params Network Param
 @param completionBlk callback Block that you should control your var
 @param get request Method GET or POST
 @return the cancel object that you can cancel the command in some situation
 */
- (id<kZMoonCancelable>)executeWithParams:(nullable NSDictionary *)params andCompletion:(kZMoonNetworkCommandExcuteCallBackBlock)completionBlk withGet:(BOOL)get;

- (id<kZMoonCancelable>)executeWithParams:(nullable NSDictionary *)params andCompletion:(kZMoonNetworkCommandExcuteCallBackBlock)completionBlk withMethod:(YTKRequestMethod)method;

@end
NS_ASSUME_NONNULL_END
