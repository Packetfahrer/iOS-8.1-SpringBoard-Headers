/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol SBWidgetViewControllerDelegate;

@protocol SBNotificationCenterWidgetHost <NSObject>
@optional
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
-(void)hostDidDismiss;
-(void)hostWillDismiss;
-(void)hostDidPresent;
-(void)hostWillPresent;
@end
