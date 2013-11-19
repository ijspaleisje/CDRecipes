//
//  CDRecipesDetailViewController.h
//  CDRecipes
//
//  Created by Bob Voorneveld on 19-11-13.
//  Copyright (c) 2013 Bob Voorneveld. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDRecipesDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
