//
//  AddViewController.h
//  Navigation
//
//  Created by Matheus Brum on 28/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol AddViewControllerDelegate <NSObject>
-(void)escolheuTexto:(NSString *)texto;
@end
@interface AddViewController : UIViewController{
    id <AddViewControllerDelegate> delegate;
    IBOutlet UITextField *campoTexto;
}
-(IBAction)done:(id)sender;
@property (nonatomic,retain)    id <AddViewControllerDelegate> delegate;
@end
