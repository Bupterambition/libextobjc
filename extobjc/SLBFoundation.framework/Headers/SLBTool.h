//
//  SLBTool.h
//  Pods
//
//  Created by Senmiao on 2017/3/2.
//
//

#import <Foundation/Foundation.h>
#import "SLBMemorabiliaEntiy.h"
#import <RealReachability/RealReachability.h>
@class CLLocation;
@interface SLBTool : NSObject

@property (nonatomic, strong, readonly) NSString *language;

@property (nonatomic, assign, readonly) BOOL tapAdUrl;

@property (nonatomic, strong, readonly) SLBMemorabiliaAllEntiy *memoEntity;

@property (nonatomic, assign, readonly) ReachabilityStatus netStatus;

@property (nonatomic, assign, readonly) WWANAccessType WWANAccessType;

+ (instancetype)sharedInstance;

+ (NSDate *)stringToDate:(NSString *)timeString withFormat:(NSString *)format;

+ (NSString *)DateToString:(NSDate *)date withFormat:(NSString *)format;

+ (void)getLocation:(CLLocation *)location completion:(void (^)(NSString *locationPlace))locationBlk;

- (void)adjustLanguage;

+ (UINavigationController *)findNavigationController:(UIView *)view;

+ (UIViewController *)findViewControllerWithClassName:(NSString *)className;

- (NSString *)getEmojiNameWithAction:(NSString *)action;

- (NSURL *)getEmojiImageWithAction:(NSString *)action;

- (void)tapUrl;

@end
