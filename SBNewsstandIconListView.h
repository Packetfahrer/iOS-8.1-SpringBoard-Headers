/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderIconListView.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandIconListView : SBFolderIconListView {
	float _iconVPaddingPortrait;
	float _topIconInsetPortrait;
	float _iconVPaddingLandscape;
	float _topIconInsetLandscape;
}
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(int)rotationAnchor;
-(void)cleanupAfterRotation;
-(void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_updateVisibleIconsFromRow:(unsigned)row toRow:(unsigned)row2 includeIcon:(id)icon layoutIfNeeded:(BOOL)needed;
-(float)verticalIconPadding;
-(float)sideIconInset;
-(float)bottomIconInset;
-(float)topIconInset;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(Class)baseIconViewClass;
@end

