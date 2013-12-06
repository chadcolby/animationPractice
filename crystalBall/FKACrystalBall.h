//
//  FKACrystalBall.h
//  crystalBall
//
//  Created by Chad D Colby on 12/2/13.
//  Copyright (c) 2013 kramerica. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FKACrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;
- (NSString *) randomPrediction;

@end
