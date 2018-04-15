//
//  NSObject+SLBEntity.h
//  Pods
//
//  Created by senmiao on 2016/9/14.
//
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SLBEntity)
/**
 *  从字典创建实体类,默认会转数组
 *
 *  @param dict 字典
 *
 *  @return 实体类
 */
+ (instancetype)slb_entityWithDictionary:(NSDictionary *)dict;

/**
 *  从字典填充数据到当前实体
 *
 *  @param dict       字典
 */
- (void)slb_setValueWithDictionary:(NSDictionary *)dict;

/**
 把当前对象转成 JSON 对象，即 NSDictionary、NSArray 如果无法转成这些类型，则返回 nil

 @return
 */
- (__nullable id)slb_entityToJSONObject;


/**
 把当前对象转成 JSON 字符串

 @return
 */
- (NSString * _Nullable)slb_entityToJSONString;
@end


@interface NSArray (SLBEntity)
+ (nullable NSArray *)slb_entityArrayWithJsonArray:(NSArray *)jsonArray andClass:(Class)cls;
+ (nullable NSArray *)slb_entityArrayWithJsonString:(NSString *)jsonString andClass:(Class)cls;
@end


@protocol SLBEntityProtocol <NSObject>

@optional
#pragma mark - map
/**
 *  字段名映射，key 为实体的字段, value 为字典中的字段
 *
 *  @return
 */
- ( NSDictionary * _Nonnull )keyMapDictionary;

/**
 *  数组中的实体类型映射，key 为数组变量名，value 为数组中的元素类型
 *
 *  @return
 */
- (NSDictionary * _Nonnull )entityMapForArray;

#pragma mark - others
/**
 *  开始解析前调用
 */
- (void)willParseValue;

/**
 *  解析完成后调用
 */
- (void)didParseValue;

@end
NS_ASSUME_NONNULL_END
