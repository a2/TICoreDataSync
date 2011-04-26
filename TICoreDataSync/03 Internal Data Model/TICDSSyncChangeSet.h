//
//  TICDSSyncChangeSet.h
//  ShoppingListMac
//
//  Created by Tim Isted on 26/04/2011.
//  Copyright (c) 2011 Tim Isted. All rights reserved.
//

#import "TICDSTypesAndEnums.h"

/** `TICDSSyncChangeSet` objects are used to keep track of collections of `TICDSSyncChange` objects. */

@interface TICDSSyncChangeSet : NSManagedObject {
@private
}

/** @name Class Factory Method */

/** Create a sync change set in the given managed object context.
 
 @param anIdentifier The unique identifier for the sync change.
 @param aClientIdentifier The unique identifier of the client device that generated this set of sync changes.
 @param aDate The original creation date of the sync change set.
 @param aMoc The managed object context in which to create the sync change.
 
 @return A suitably-configured `TICDSSyncChange` object for the given change.
 */
+ (id)syncChangeSetWithIdentifier:(NSString *)anIdentifier fromClient:(NSString *)aClientIdentifier creationDate:(NSDate *)aDate inManagedObjectContext:(NSManagedObjectContext *)aMoc;

/** @name Helper Methods */

/** Check whether a sync change set with a given identifier has already been applied in a managed object context.
 
 @param anIdentifier The unique identifier for the sync change.
 @param aMoc The managed object context to check.
 
 @return A Boolean indicating whether the sync change has already been applied. */
+ (BOOL)hasSyncChangeSetWithIdentifer:(NSString *)anIdentifier alreadyBeenAppliedInManagedObjectContext:(NSManagedObjectContext *)aMoc;

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSString * fileName;
@property (nonatomic, retain) NSString * syncChangeSetIdentifier;
@property (nonatomic, retain) NSDate * localDateOfApplication;
@property (nonatomic, retain) NSString * clientIdentifier;

@end
