//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class ViewContainer;

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate>
{
    ViewContainer *container;
}

@property(nonatomic) ViewContainer *container; // @synthesize container;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

