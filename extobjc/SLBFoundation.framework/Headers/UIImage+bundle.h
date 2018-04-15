//
//  UIImage+bundle.h
//  Pods
//
//  Created by Senmiao on 2016/12/20.
//
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface UIImage (bundle)
+ (nullable UIImage *)imageNamed:(NSString *)name inBundleName:(NSString *)bundleName;
@end
NS_ASSUME_NONNULL_END
