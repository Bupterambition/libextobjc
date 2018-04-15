//
//  SLBEmpty.h
//  Pods
//
//  Created by Senmiao on 2017/3/21.
//
//

#import <UIKit/UIKit.h>

@interface SLBEmptyView : UIView

@property (nonatomic, copy) NSString *displayText;
    
@property (nonatomic, strong) UIImage *backgroudImage;

@property (nonatomic, assign) CGFloat displayTextOffSet;

@property (nonatomic, assign) CGFloat displayImageOffSet;

- (instancetype)initWithFrame:(CGRect)frame withImageTouch:(void (^)(UIImageView *image))touchBlock;

@end
