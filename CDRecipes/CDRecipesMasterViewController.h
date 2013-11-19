//
//  CDRecipesMasterViewController.h
//  CDRecipes
//
//  Created by Bob Voorneveld on 19-11-13.
//  Copyright (c) 2013 Bob Voorneveld. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface CDRecipesMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
