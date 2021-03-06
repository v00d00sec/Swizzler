/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface DocumentsInfoViewController : _ABAddressBookAddRecord
{
    BOOL showUnlockButton;
    id <DocumentsInfoViewControllerDelegate> delegate;
    UIImageView *fileTypeImage;
    UIImage *typeImage;
    NSString *statusText;
    UILabel *statusLabel;
    UIButton *unlockButton;
    UIImageView *dialogBoxView;
}

- (void)setDialogBoxView:(id)fp8;
- (id)dialogBoxView;
- (void)setShowUnlockButton:(BOOL)fp8;
- (BOOL)showUnlockButton;
- (void)setUnlockButton:(id)fp8;
- (id)unlockButton;
- (void)setStatusLabel:(id)fp8;
- (id)statusLabel;
- (void)setStatusText:(id)fp8;
- (id)statusText;
- (void)setTypeImage:(id)fp8;
- (id)typeImage;
- (void)setFileTypeImage:(id)fp8;
- (id)fileTypeImage;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)recalculateLabelTextPosition;
- (void)unlockButtonClicked:(id)fp8;

@end

