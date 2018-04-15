//
//  UILabel+SLB.h
//  Pods
//
//  Created by Senmiao on 2017/3/3.
//
//

#import <UIKit/UIKit.h>

@interface UILabel (SLB)

- (CGSize)contentSizeForWidth:(CGFloat)width;

- (CGSize)contentSize;

- (BOOL)isTruncated;


@end
