//
//  NSDictionary+MGLSecurityUtil.h
//  MGJSecurity
//
//  Created by tiangua on 5/16/16.
//  Copyright © 2016 mogujie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (MLSSecurityUtil)

- (id)objectForKey:(id)aKey ofClass:(Class)aClass;

- (NSString *)stringForKey:(id)aKey;

- (void)slb_safeSetObject:(id)anobject forKey:(NSString *)akey;

- (void)slb_safeRemoveObjectForKey:(NSString *)aKey;
@end
