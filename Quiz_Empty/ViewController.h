//
//  ViewController.h
//  Quiz_Empty
//
//  Created by William Kong on 12/13/2013.
//  Copyright (c) 2013 William Kong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int currentQuestionIndex;
    
    // the model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // the view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

- (IBAction) showQuestion:(id) sender;
- (IBAction) showAnswer:(id) sender;

@end
