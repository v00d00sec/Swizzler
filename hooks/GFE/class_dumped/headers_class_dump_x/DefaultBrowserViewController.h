/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class DefaultBrowserHandler, NSMutableArray;

@interface DefaultBrowserViewController : _ABAddressBookAddRecord
{
    DefaultBrowserHandler *_defaultBrowserHandler;
    NSMutableArray *_availableBrowsersNames;
    int _selectedRow;
}

- (void)setSelectedRow:(int)fp8;
- (int)selectedRow;
- (void)setAvailableBrowsersNames:(id)fp8;
- (id)availableBrowsersNames;
- (id)defaultBrowserHandler;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)reload;
- (void)checkPreviouslySelectedRowWithNewRow:(int)fp8;
- (void)createBrowsersList;
- (id)initWithStyle:(int)fp8;
- (void)dealloc;
- (id)init;

@end
