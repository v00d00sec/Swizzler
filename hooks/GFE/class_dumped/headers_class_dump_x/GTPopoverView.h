/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, UIView;

@interface GTPopoverView : _ABAddressBookAddRecord
{
    struct CGRect boxFrame;
    struct CGSize contentSize;
    struct CGPoint arrowPoint;
    BOOL dismissed;
    id <GTPopoverViewDelegate> delegate;
    UIView *parentView;
    UIView *topView;
    NSArray *subviewsArray;
    UIView *contentView;
    int _selectedIndex;
}

+ (id)showPopoverAtPoint:(struct CGPoint)fp8 inView:(id)fp16 withContentView:(id)fp20 withSelectedIndex:(int)fp24 delegate:(id)fp28;
+ (id)showPopoverAtPoint:(struct CGPoint)fp8 inView:(id)fp16 withViewArray:(id)fp20 withSelectedIndex:(int)fp24 delegate:(id)fp28;
+ (void)initialize;
- (int)selectedIndex;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setSubviewsArray:(id)fp8;
- (id)subviewsArray;
- (void)onAccessibilityVoiceOverStatusChanged:(id)fp8;
- (void)setSelectedIndex:(int)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)dismissComplete;
- (void)dismiss:(BOOL)fp8;
- (void)dismiss;
- (void)didTapButton:(id)fp8;
- (void)selectNextButton:(id)fp8;
- (void)rotateSelection;
- (void)delayDismiss;
- (void)tapped:(id)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)setupLayout:(struct CGPoint)fp8;
- (void)showAtPoint:(struct CGPoint)fp8 inView:(id)fp16 withContentView:(id)fp20 withSelectedIndex:(int)fp24;
- (void)showAtPoint:(struct CGPoint)fp8 inView:(id)fp16 withViewArray:(id)fp20 withSelectedIndex:(int)fp24;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

