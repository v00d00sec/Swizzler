/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class FolderViewEmailCell, FolderViewEmailItem;

@interface FolderViewEmailCellContentView : _ABAddressBookAddRecord
{
    FolderViewEmailCell *_cellContainer;
    FolderViewEmailItem *_listItem;
    BOOL _highlighted;
    BOOL _editing;
    BOOL _showingDeleteConfirmation;
    float _maxWidth;
}

- (BOOL)highlighted;
- (void)setCellContainer:(id)fp8;
- (id)cellContainer;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)fp8;
- (id)listItem;
- (void)setListItem:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
