//
//  NSUserDefaults+SLBSafe.h
//  Pods
//
//  Created by Senmiao on 2017/2/7.
//
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (SLBSafe)

- (instancetype)slb_safe_objectForKey:(NSString *)defaultName ;

- (void)slb_safe_setObject:(id)value forKey:(NSString *)defaultName ;

- (void)slb_safe_removeObjectForKey:(NSString *)defaultName;

@end
