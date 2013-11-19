//
//  CDRecipesAppDelegate.h
//  CDRecipes
//
//  Created by Bob Voorneveld on 19-11-13.
//  Copyright (c) 2013 Bob Voorneveld. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDRecipesAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
