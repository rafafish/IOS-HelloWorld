//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by mac on 8/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController {    
    
    IBOutlet UILabel *Mensagem;
    IBOutlet UILabel *FeitoPor;
}
- (IBAction)Botao:(id)sender;

@end
