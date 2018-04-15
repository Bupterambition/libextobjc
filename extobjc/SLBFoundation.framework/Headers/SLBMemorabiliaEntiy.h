//
//  SLBMemorabiliaEntiy.h
//  Pods
//
//  Created by Senmiao on 2017/2/21.
//
//

#import <UIKit/UIKit.h>
#import "SLBEntity.h"
@class SLBMemorabiliaEntiy;

@class SLBEmojiImageArray,SLBLanguage;
@interface SLBMemorabiliaAllEntiy : SLBEntity
@property (nonatomic, copy) NSString *ret;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSArray <SLBMemorabiliaEntiy *> *data;
@end

@interface SLBMemorabiliaEntiy : SLBEntity
@property (nonatomic, strong) SLBEmojiImageArray *image;
@property (nonatomic, copy) NSString *action;
@property (nonatomic, strong) SLBLanguage *text;
@property (nonatomic, copy) NSString *emojiName;
@end


@interface SLBEmojiImageArray : SLBEntity

@property (nonatomic, copy) NSString *H60;
@property (nonatomic, copy) NSString *L60;
@property (nonatomic, copy) NSString *L90;
@property (nonatomic, copy) NSString *H40;
@property (nonatomic, copy) NSString *L40;

@end

@interface SLBLanguage : SLBEntity

@property (nonatomic, copy) NSString *en;
@property (nonatomic, copy) NSString *ar;

@end
