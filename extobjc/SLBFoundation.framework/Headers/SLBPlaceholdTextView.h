//
//  SLBPlaceholdTextView.h
//  Pods
//
//  Created by Senmiao on 2017/1/3.
//
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

IB_DESIGNABLE

@interface SLBPlaceholdTextView : UITextView

@property(strong,nonatomic) NSIndexPath * indexPath;

//最大长度设置
@property(assign,nonatomic) NSInteger maxTextLength;

//更新高度的时候
@property(assign,nonatomic) CGFloat updateHeight;


@property(copy,nonatomic) IBInspectable NSString *placeholder;

/**
 *  增加text 长度限制
 *
 *  @param maxLength <#maxLength description#>
 *  @param limit     <#limit description#>
 */
-(void)addMaxTextLengthWithMaxLength:(NSInteger)maxLength andEvent:(void(^)(SLBPlaceholdTextView *text))limit;
/**
 *  开始编辑 的 回调
 *
 *  @param begin <#begin description#>
 */
-(void)addTextViewBeginEvent:(void(^)(SLBPlaceholdTextView *text))begin;

/**
 *  结束编辑 的 回调
 *
 *  @param begin <#begin description#>
 */
-(void)addTextViewEndEvent:(void(^)(SLBPlaceholdTextView *text))End;

/**
 *  设置Placeholder 颜色
 *
 *  @param color <#color description#>
 */
-(void)setPlaceholderColor:(UIColor*)color;

/**
 *  设置Placeholder 字体
 *
 *  @param font <#font description#>
 */
-(void)setPlaceholderFont:(UIFont*)font;

/**
 *  设置透明度
 *
 *  @param opacity <#opacity description#>
 */
-(void)setPlaceholderOpacity:(float)opacity;
@end
NS_ASSUME_NONNULL_END
