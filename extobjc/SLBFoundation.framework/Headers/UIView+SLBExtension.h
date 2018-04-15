//
//  UIView+SLBExtension.h
//  Pods
//
//  Created by Senmiao on 2016/12/15.
//
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface UIView (SLBExtension)
@property (nonatomic, assign) CGFloat X;
@property (nonatomic, assign) CGFloat Y;
@property (nonatomic, assign) CGFloat W;
@property (nonatomic, assign) CGFloat H;
@property (nonatomic, assign) CGSize  size;
@property (nonatomic, assign) CGPoint point;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat left;

- (void)adjustLabelTextAlignment;

@end
NS_ASSUME_NONNULL_END
