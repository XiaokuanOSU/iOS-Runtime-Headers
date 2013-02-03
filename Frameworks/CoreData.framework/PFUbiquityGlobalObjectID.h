/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {
    NSString *_entityName;
    unsigned int _hash;
    NSManagedObjectID *_managedObjectID;
    NSString *_owningPeerID;
    NSString *_primaryKey;
    unsigned int _primaryKeyInteger;
    NSString *_storeName;
}

@property(readonly) NSString * entityName;
@property(readonly) unsigned int hash;
@property(retain) NSManagedObjectID * managedObjectID;
@property(readonly) NSString * owningPeerID;
@property(readonly) NSString * primaryKey;
@property(readonly) unsigned int primaryKeyInteger;
@property(readonly) NSString * storeName;

- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createCompressedStringWithEntityNameToIndex:(id)arg1 primaryKeyToIndex:(id)arg2 peerIDToIndex:(id)arg3;
- (id)createGlobalIDString;
- (void)dealloc;
- (id)description;
- (id)entityName;
- (unsigned int)hash;
- (id)init;
- (id)initFromCopyWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 peerID:(id)arg4 andHash:(unsigned int)arg5 managedObjectID:(id)arg6 primaryKeyInteger:(unsigned int)arg7;
- (id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned int)arg3 andPeerID:(id)arg4;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)managedObjectID;
- (id)owningPeerID;
- (id)primaryKey;
- (unsigned int)primaryKeyInteger;
- (void)setManagedObjectID:(id)arg1;
- (id)storeName;
- (void)updateHash;

@end