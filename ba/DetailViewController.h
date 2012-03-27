//
//  DetailViewController.h
//  ba
//
//  Created by  on 12-3-27.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;


@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
