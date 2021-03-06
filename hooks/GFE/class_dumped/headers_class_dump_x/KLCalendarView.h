/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GUSwipeTrackerDelegate-Protocol.h"

@class GUSwipeTracker, KLCalendarModel, KLGenericViewController, UIButton, UILabel, UINavigationController;

@interface KLCalendarView : _ABAddressBookAddRecord <GUSwipeTrackerDelegate>
{
    KLCalendarModel *model;
    UILabel *selectedPeriodLabel;
    UINavigationController *navigationController;
    KLGenericViewController *controller;
    UIButton *previousPeriodButton;
    UIButton *nextPeriodButton;
    GUSwipeTracker *swipeTracker;
    UILabel *titleLabel;
}

- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setNavigationController:(id)fp8;
- (id)navigationController;
- (void)setSelectedPeriodLabel:(id)fp8;
- (id)selectedPeriodLabel;
- (void)dealloc;
- (void)wasSwipedRightInView:(id)fp8;
- (void)wasSwipedLeftInView:(id)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (int)selectedMonthNumberOfWeeks;
- (id)selectedMonthName;
- (void)removeNavButtons;
- (void)addNavButtonsAtTop:(float)fp8;
- (void)removeSelectedPeriodLabel;
- (void)addSelectedPeriodLabelAtTop:(float)fp8 withFontSize:(float)fp12;
- (void)switchCalendarView:(id)fp8;
- (void)goToToday;
- (void)addNavigationToolBarAtTop:(id)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)drawGradientHeaderInContext:(struct CGContext *)fp8;
- (float)headerHeight;
- (void)addNew;
- (void)ensurePlusButtonPresentInNavBar;
- (id)initWithFrame:(struct CGRect)fp8 model:(id)fp24 controller:(id)fp28;

@end

