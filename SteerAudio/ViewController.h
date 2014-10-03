//
//  ViewController.h
//  SteerAudio
//
//  Created by Philadelphia Game Lab on 7/30/14.
//  Copyright (c) 2014 Philadelphia Game Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RotaryProtocol.h"
#include "Sonic.h"
#import <CoreMotion/CoreMotion.h>
#import "SteeringWheel.h"

#define PI 3.14159

@interface ViewController : UIViewController<RotaryProtocol>{
    
    CMMotionManager *motionManager;
    NSTimer *timer;
    double originalYaw;
    SteeringWheel *steeringWheel;
}

@property (nonatomic, strong) UILabel *valueLabel;
@property (atomic) float azimuthMain;
@property CustomAudioUnit *customAudioUnit;
@property AudioObj *audioObj1;

@end

