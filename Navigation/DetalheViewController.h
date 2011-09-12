//
//  DetalheViewController.h
//  Navigation
//
//  Created by Matheus Brum on 28/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetalheViewController : UIViewController{
    IBOutlet UILabel *labelTexto;
    NSString *textoAMostrar;
}
@property (nonatomic,retain)    NSString *textoAMostrar;
@end
