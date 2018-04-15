//
//  SLBMacros.h
//  Pods
//
//  Created by Senmiao on 2016/12/13.
//
//

#ifndef SLBMacros_h
#define SLBMacros_h

#define SLB_ASSERT_MAIN_THREAD                          NSAssert([NSThread isMainThread], @"必须在主线程调用这个方法")
#define SLB_INVALIDATE_TIMER(__TIMER)                   { [__TIMER invalidate]; __TIMER = nil; }
#define SLB_STRING_IS_EMPTY_OR_NIL(_STRING)             ( _STRING == nil || [_STRING isEmptyOrWhitespace] )
#define SLB_VERIFIED_CLASS(className) ((className *)    NSClassFromString(@"" # className))
#define SLB_RECT_CLEAR_COORDS(_CGRECT)                  CGRectMake(0, 0, _CGRECT.size.width, _CGRECT.size.height)
#define SLB_RECT_SET_WIDTH(f, w)                        CGRectMake(f.origin.x, f.origin.y, w, f.size.height)
#define SLB_RECT_SET_HEIGHT(f, h)                       CGRectMake(f.origin.x, f.origin.y, f.size.width, h)
#define SLB_RECT_SET_X(f, x)                            CGRectMake(x, f.origin.y, f.size.width, f.size.height)
#define SLB_RECT_SET_Y(f, y)                            CGRectMake(f.origin.x, y, f.size.width, f.size.height)
#define SLB_RECT_SET_SIZE(f, w, h)                      CGRectMake(f.origin.x, f.origin.y, w, h)
#define SLB_RECT_SET_ORIGIN(f, x, y)                    CGRectMake(x, y, f.size.width, f.size.height)

#define SLB_RGBACOLOR(r,g,b,a)                          [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define SLB_RGBCOLOR(r,g,b)                             SLB_RGBACOLOR(r,g,b,1)
#define SLB_HEXCOLOR(c)                                 [UIColor colorWithRed:((c>>16)&0xFF)/255.0 green:((c>>8)&0xFF)/255.0 blue:(c&0xFF)/255.0 alpha:1.0]

#define SLB_DEFAULT_HEADER                              [UIImage imageNamed:@"SLBMainPage_head_1"]
#define SLB_SafeBlock(block,...)                        !(block) ? : block(__VA_ARGS__)

#ifdef DEBUG
#define SLB_TSTART                                      { NSTimeInterval __tStart = CFAbsoluteTimeGetCurrent();
#define SLB_TSTOP                                       NSLog(@"%s: %f secs", __PRETTY_FUNCTION__, CFAbsoluteTimeGetCurrent() - __tStart); }
#define SLB_TSTOPLOG(fmt, ...)                          NSLog((@"%s\n\n    %.8f secs: " fmt @"\n\n"), __PRETTY_FUNCTION__, (CFAbsoluteTimeGetCurrent() - __tStart), ##__VA_ARGS__); }
#else
#define SLB_TSTART
#define SLB_TSTOP
#define SLB_TSTOPLOG
#endif

// Image
#define SLB_IMAGE(path)                                 [UIImage imageNamed:@(# path)]
// App Shortcuts
#define SLB_APPDELEGATE                                 ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#define SLB_SCREENWIDTH                                 [[UIScreen mainScreen] bounds].size.width
#define SLB_SCREENHEIGHT                                [[UIScreen mainScreen] bounds].size.height

// System Compare
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

// File Paths
#define SLB_FULLPATH(_filePath_)                        [[NSBundle mainBundle] pathForResource:[_filePath_ lastPathComponent] ofType:nil inDirectory:[_filePath_ stringByDeletingLastPathComponent]]
#define SLB_FILPATH4DOCUMENT(_value)                    [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:_value]
#define SLB_FILEPATH4BUNDLE(_value)                     [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:_value]
#define SLB_URL4FILEPATH(_value)                        [NSURL fileURLWithPath:_value]
#define SLB_URL4DOCUMENT(_value)                        [NSURL fileURLWithPath:[[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:_value]]
#define SLB_URL4BUNDLE(_value)                          [NSURL fileURLWithPath:[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:_value]]

// Value or nil
#define SLB_INT(value)                                  (value ? [NSNumber numberWithInt:value] : [NSNumber numberWithInt:0])
#define SLB_FLOAT(value)                                (value ? [NSNumber numberWithDouble:(double)value] : [NSNumber numberWithDouble:(double)0.0])
#define SLB_BOOL(value)                                 (value ? [NSNumber numberWithBool:value] : [NSNumber numberWithBool:NO])

#define SLB_dispatch_main_sync_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_sync(dispatch_get_main_queue(), block);\
}

#define SLB_dispatch_main_async_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

#import <Foundation/Foundation.h>

static inline BOOL SLB_IS_EMPTY(id thing) {
    return thing == nil ||
    ([thing isEqual:[NSNull null]]) ||
    ([thing respondsToSelector:@selector(length)] && [(NSData *)thing length] == 0) ||
    ([thing respondsToSelector:@selector(count)]  && [(NSArray *)thing count] == 0);
}


#endif /* SLBMacros_h */
