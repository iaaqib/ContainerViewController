//
//  ContainerViewController.h
//  Container View
//
//  Created by Aaqib Hussain on 11/03/2016.
//  Copyright © 2016 Aaqib Hussain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContainerViewController : UIViewController
-(void)segueIdentifierReceivedFromParent:(NSString*)button;
@property NSString *segueIdentifier;
@property (nonatomic,assign) UIViewController* vc;

@end
