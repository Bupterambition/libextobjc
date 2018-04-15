//
//  NSData+MGLSecurityUtil.h
//  MGJSecurity
//
//  Created by tiangua on 5/16/16.
//  Copyright © 2016 mogujie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (MLSSecurityUtil)

-(NSString *)mlsSecurity_md5Hash;

-(NSString *)mlsSecurity_sha1Hash;

- (NSString *)mlsSecurity_base64Encoding;


+ (instancetype)mlsSecurity_dataInLibrary:(NSString *)libraryName withBundleResource:(NSString *)resourceName ofType:(NSString *)type;
@end
