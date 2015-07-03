//
//  BLEInfo.h
//  ADLBlue
//
//  Created by icePhoenix on 15/6/29.
//  Copyright (c) 2015年 aodelin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BLEInfo : NSObject

@property (nonatomic, strong) CBPeripheral *discoveredPeripheral;
@property (nonatomic, strong) NSNumber *rssi;

@end
