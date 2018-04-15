//
//  NSArray+SLBSafe.h
//  Pods
//
//  Created by Senmiao on 2017/2/27.
//
//

#import <Foundation/Foundation.h>

@interface NSArray<__covariant ObjectType> (SLBSafe)
- (ObjectType)slb_safe_objectAtIndex:(NSUInteger)index;
@end
@interface NSMutableArray< ObjectType> (SLBSafe)
- (void)slb_safe_addObject:(ObjectType)anObject;
@end
