//
//  UIDevice+StorageSize.m
//
//  Created by hokun on 11. 8. 4..
//  Copyright 2011 CLBee System. All rights reserved.
//

#include <sys/param.h>  
#include <sys/mount.h>  
#import "UIDevice+StorageSize.h"

@implementation UIDevice (StorageSize)

+ (float)getDeviceFreeStorageSize
{  
    NSArray* paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);  
    struct statfs tStats;  
    statfs([[paths lastObject] cString], &tStats);  
    float total_space = (float)(tStats.f_blocks * tStats.f_bsize);  
    
    return total_space;  
}

@end
