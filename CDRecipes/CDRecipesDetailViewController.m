//
//  CDRecipesDetailViewController.m
//  CDRecipes
//
//  Created by Bob Voorneveld on 19-11-13.
//  Copyright (c) 2013 Bob Voorneveld. All rights reserved.
//

#import "CDRecipesDetailViewController.h"

@interface CDRecipesDetailViewController ()
- (void)configureView;
@end

@implementation CDRecipesDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
