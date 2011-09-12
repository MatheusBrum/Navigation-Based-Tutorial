//
//  RootViewController.h
//  Navigation
//
//  Created by Matheus Brum on 28/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetalheViewController.h"
#import "AddViewController.h"
@interface RootViewController : UITableViewController <AddViewControllerDelegate>{
    NSMutableArray *superArray;
}

@end
