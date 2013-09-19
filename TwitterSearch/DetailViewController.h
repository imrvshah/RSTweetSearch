//
//  DetailViewController.h
//  TwitterSearch
//
//  Created by Ravi Shah on 18/09/13.
//  Copyright (c) 2013 Ravi Shah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
