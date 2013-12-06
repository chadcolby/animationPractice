//
//  FKAViewController.h
//  crystalBall
//
//  Created by Chad D Colby on 11/30/13.
//  Copyright (c) 2013 kramerica. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FKACrystalBall;

@interface FKAViewController : UIViewController

@property (strong, nonatomic)IBOutlet UILabel *predictionLabel;
//- (IBAction)buttonPressed;
@property (strong, nonatomic) FKACrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction;
@end
