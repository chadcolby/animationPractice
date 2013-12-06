//
//  FKACrystalBall.m
//  crystalBall
//
//  Created by Chad D Colby on 12/2/13.
//  Copyright (c) 2013 kramerica. All rights reserved.
//

#import "FKACrystalBall.h"

@implementation FKACrystalBall

- (NSArray *) predictions {
    if (_predictions  == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"It is probable", @"For sure",
        @"Don't hold your breath",@"Yeah right", @"Not in a million years", @"Hells yeah!", nil];
    }
    return _predictions;
}
- (NSString *) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
