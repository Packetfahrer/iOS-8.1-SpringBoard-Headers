/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, UIImageView;

__attribute__((visibility("hidden")))
@interface SBNotificationsClearButton : XXUnknownSuperclass {
	NSString* _title;
	UIImageView* _circleImageView;
	UIImageView* _xImageView;
	UIImageView* _compositeCircleXImageView;
	NSMutableArray* _glyphImageViews;
	unsigned _animatingTransitionCount;
	int _graphicsQuality;
	int _clearButtonState;
}
@property(readonly, assign, nonatomic) int clearButtonState;
@property(readonly, assign, nonatomic) int graphicsQuality;
+(id)_xImageWithGraphicsQuality:(int)graphicsQuality;
+(id)_circleImageWithGraphicsQuality:(int)graphicsQuality;
+(id)compositeCircleXImageWithGraphicsQuality:(int)graphicsQuality;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)_layoutSubviewsForState:(int)state;
-(id)_glyphFramesWithCircleFrame:(CGRect)circleFrame forState:(int)state;
-(CGRect)_xFrameWithCircleFrame:(CGRect)circleFrame forState:(int)state;
-(CGRect)_circleFrameForState:(int)state;
-(CGRect)_circleBoundsForState:(int)state;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGRect)_unrolledCircleBounds;
-(void)setState:(int)state animated:(BOOL)animated;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(id)_glyphImagesFromAttributedString:(id)attributedString;
-(id)compositeCircleXImage;
-(id)_xImage;
-(id)_circleImage;
-(void)dealloc;
-(id)initWithTitle:(id)title graphicsQuality:(int)quality;
@end

