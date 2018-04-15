//
//  NSBundle+MLSSecurityUtil.h
//  MGJSecurity
//
//  Created by tiangua on 5/16/16.
//  Copyright © 2016 mogujie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (MLSSecurityUtil)

+ (NSBundle *)mlsSecurity_libraryResourcesBundle:(NSString *)libraryName;
@end
