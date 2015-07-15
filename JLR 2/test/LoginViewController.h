//
//  LoginViewController.h
//  test
//
//  Created by admin on 02/03/15.
//  Copyright (c) 2015 LetsIDev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "positionlist.h"
#import "AppDelegate.h"

@interface LoginViewController : UIViewController
{
 //position_LIST *positionlist;
   AppDelegate *appdelegate;

}

- (IBAction)loginScreeb:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *username;
@property (strong, nonatomic) IBOutlet UITextField *password;
@property (strong, nonatomic) IBOutlet UIButton *LoginButton;


@end
