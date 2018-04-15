//
//  SLBCommandViewModel.h
//  Pods
//
//  Created by Senmiao on 2016/12/29.
//
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import "kZMoonNetworkCommand.h"
NS_ASSUME_NONNULL_BEGIN

#define SLB_VM_COMMAND(API, CLASS, KEY) \
[self commandWithAPI:@(# API) class:@(# CLASS) key:@keypath(self, KEY)]

@interface SLBCommandViewModel : NSObject

@property (nonatomic, assign, readonly) BOOL executing;

@property (nonatomic, strong, readonly) NSError *error;

@property (nonatomic, readonly) RACSignal <NSNumber *> *executingSignal;

@property (nonatomic, readonly) RACSignal <NSError *> *errorSignal;

@property (nonatomic, copy) void(^MGJPFErrorHandle)(NSError *error);

- (void)resetExecute;

- (kZMoonNetworkCommand *)commandWithAPI:(NSString *)api class:(NSString *)cls key:(NSString *)key;

@end
NS_ASSUME_NONNULL_END
