/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSOperationQueue;

@interface SBDatabaseManager : _ABAddressBookAddRecord
{
    BOOL bTerminating;
    NSOperationQueue *databaseQueue;
}

+ (id)sharedInstance;
- (void)setBTerminating:(BOOL)fp8;
- (BOOL)bTerminating;
- (void)setDatabaseQueue:(id)fp8;
- (id)databaseQueue;
- (void)queueBlock:(id)fp(null);
- (void)gracefulShutdown;
- (void)terminate;
- (void)dealloc;
- (id)init;

@end
