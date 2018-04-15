//
//  SLBFoundation_Object.h
//  Pods
//
//  Created by Senmiao on 2017/2/7.
//
//

#ifndef SLBFoundation_Object_h
#define SLBFoundation_Object_h
#if __has_include(<SLBFoundation/SLBFoundation_Object.h>)

#import <SLBFoundation/NSBundle+MLSSecurityUtil.h>
#import <SLBFoundation/NSData+MLSSecurityUtil.h>
#import <SLBFoundation/NSMutableDictionary+MLSSecurityUtil.h>
#import <SLBFoundation/NSString+MLSSecurityUtil.h>
#import <SLBFoundation/NSUserDefaults+SLBSafe.h>
#import <SLBFoundation/NSArray+SLBSafe.h>

#else

#import "NSUserDefaults+SLBSafe"
#import "NSBundle+MLSSecurityUtil.h"
#import "NSData+MLSSecurityUtil.h"
#import "NSString+MLSSecurityUtil.h"
#import "NSMutableDictionary+MLSSecurityUtil.h"
#import "NSArray+SLBSafe.h"

#endif /* __has_include */

#endif /* SLBFoundation_Object_h */
