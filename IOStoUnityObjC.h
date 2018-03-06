//
//  IOStoUnityObjC.h
//  Integrated_Basketball
//
//  Created by Mark Kreitler on 3/5/18.
//  Copyright © 2018 Mark Kreitler. All rights reserved.


#import <Foundation/Foundation.h>

@class UIViewController;

@interface IOStoUnityObjC : NSObject
{
    // Instance variables.
    int adId;
}

- (void)startResourceLoad;
- (int)randomizeAdId;
- (void)scoreFromUnity: (int)value;
- (void)setViewController: (UIViewController *)vc;
@end

