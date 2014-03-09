//
//  ARCollectionViewController.h
//  Argos
//
//  Created by Francis Tseng on 2/24/14.
//  Copyright (c) 2014 Argos. All rights reserved.
//
//  =====================================================
//  Abstract super class for collection view controllers.
//  This handles image downloading for its cells.
//  =====================================================

#import "ARCollectionView.h"
#import "ARCollectionViewCell.h"
#import "AREntity.h"

@interface ARCollectionViewController : UICollectionViewController <NSFetchedResultsControllerDelegate, UIScrollViewDelegate>

- (id)initWithCollectionViewLayout:(UICollectionViewLayout*)collectionViewLayout forEntityNamed:(NSString*)entityName;
- (id)initWithCollectionViewLayout:(UICollectionViewLayout*)collectionViewLayout forEntityNamed:(NSString*)entityName withPredicate:(NSPredicate*)predicate;
- (void)downloadImageForEntity:(id<AREntity>)entity forIndexPath:(NSIndexPath*)indexPath;
- (void)handleImageForEntity:(id<AREntity>)entity forCell:(ARCollectionViewCell*)cell atIndexPath:(NSIndexPath*)indexPath;
- (void)loadImagesForOnscreenRows;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) UIRefreshControl *refreshControl;
@property (strong, nonatomic) ARCollectionView *collectionView;
@property (strong, nonatomic) NSString *sortKey;
@property (strong, nonatomic) NSPredicate *predicate;

@end
