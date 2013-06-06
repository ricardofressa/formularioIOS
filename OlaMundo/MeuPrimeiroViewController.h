//
//  MeuPrimeiroViewController.h
//  OlaMundo
//
//  Created by Ricardo Cardoso on 02/06/13.
//  Copyright (c) 2013 Ricardo Cardoso. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MeuPrimeiroViewController : UIViewController <UITextFieldDelegate>
{
    IBOutlet UILabel *meuPrimeiroLabel;
    IBOutlet UITextField *meuPrimeiroTextField;
    IBOutlet UITextField *meuSegundoTextField;
    IBOutlet UIImageView *imageView;
}

- (IBAction)olaMundo:(id)sender;
- (IBAction)sliderValueChanger:(id)sender;

@end
