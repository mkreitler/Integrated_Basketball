//
//  IOStoUnityObjC.m
//  Integrated_Basketball
//
//  Created by Mark Kreitler on 3/5/18.
//  Copyright © 2018 Mark Kreitler. All rights reserved.
//

#import "IOStoUnityObjC.h"
#import <IntegratedBasketball-Swift.h>

ViewController* unityViewController = NULL;

@implementation IOStoUnityObjC
- (id) init {
    self = [super init];
    
    adId = 0;
    
    return self;
}

- (void)startResourceLoad {
    NSString *adStr = [NSString stringWithFormat:@"%d", adId];
    const char *str = [adStr UTF8String];
    UnitySendMessage("World", "StartResourceLoad", str);
}

- (int)randomizeAdId {
    adId = 1 + arc4random() % 3;
    
    return adId;
}

- (void)scoreFromUnity: (int)value {
    if (unityViewController != NULL) {
        [unityViewController setScoreWithValue:value];
    }
}

- (void)setViewController: (ViewController *)vc {
    unityViewController = vc;
}

@end

