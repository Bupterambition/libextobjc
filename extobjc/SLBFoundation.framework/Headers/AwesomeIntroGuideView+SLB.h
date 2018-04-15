//
//  AwesomeIntroGuideView+SLB.h
//  Pods
//
//  Created by Senmiao on 2017/3/27.
//
//

#import <AwesomeIntroGuideView/AwesomeIntroGuideView.h>

typedef void(^SLBCameraBlock)(void);

@interface AwesomeIntroGuideView (SLB)

@property (nonatomic, copy) SLBCameraBlock cameraBlock;

@end
