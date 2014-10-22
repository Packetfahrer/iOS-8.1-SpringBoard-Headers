/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_SBFVibrantView.h"

@class SBLegibilityView, UIImage, UIView, _SBFVibrantSettings, NSString, SBSaturatedIconView;
@protocol SBResponderTouchDelegate;

__attribute__((visibility("hidden")))
@interface SBSlideUpAppGrabberView : XXUnknownSuperclass <_SBFVibrantView> {
	UIEdgeInsets _hitTestEdgeInsets;
	UIView* _tintView;
	UIView* _backgroundView;
	SBLegibilityView* _legibilityView;
	SBSaturatedIconView* _saturatedIconView;
	UIImage* _grabberImage;
	BOOL _vibrancyAllowed;
	_SBFVibrantSettings* _vibrantSettings;
	id<SBResponderTouchDelegate> _delegate;
}
@property(retain, nonatomic) _SBFVibrantSettings* vibrantSettings;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed;
@property(readonly, assign, nonatomic) UIEdgeInsets hitTestEdgeInsets;
@property(assign, nonatomic) id<SBResponderTouchDelegate> delegate;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)updateForChangedSettings:(id)changedSettings;
-(void)setStrength:(float)strength;
-(id)_lazyLegibilityView;
-(void)setBackgroundView:(id)view;
-(BOOL)_shouldUseVibrancy;
-(void)setAppStyleGrabberImage:(id)image;
-(void)setGrabberImageFromApp:(id)app;
-(void)setGrabberImage:(id)image;
-(void)setBackgroundColor:(id)color;
-(CGSize)sizeThatFits:(CGSize)fits;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)dealloc;
-(id)initWithAdditionalTopPadding:(BOOL)additionalTopPadding invertVerticalInsets:(BOOL)insets;
@end
