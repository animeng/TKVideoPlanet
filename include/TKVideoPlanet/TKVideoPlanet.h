//
//  TKVideoPlanet.h
//  TKVideoPlanet
//
//  Created by wang animeng on 2016/10/31.
//  Copyright © 2016年 tiki. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TKVideoPlanet : NSObject

- (void)connectRoomId:(NSString*)roomId
        completeBlock:(void (^)(NSError * error))complete;

@end
