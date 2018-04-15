//
//  NSString+MGLSecurityUtil.h
//  MGJSecurity
//
//  Created by tiangua on 5/16/16.
//  Copyright © 2016 mogujie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MLSSecurityUtil)

- (NSString *)mlsSecurity_md5Hash;
- (NSString *)mlsSecurity_sha1Hash;

- (NSString *)mlsSecurity_md5Base64Hash;
- (NSString *)mlsSecurity_sha1Base64Hash;

@end
