/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinObserverViewController.h"
#import "SpringBoard-Structs.h"
#import "SBWidgetHandling.h"

@class NSSet, NSString, NSMutableDictionary, NSArray, SBBBSectionInfo;

__attribute__((visibility("hidden")))
@interface SBTodayViewController : SBBulletinObserverViewController <SBWidgetHandling> {
	NSMutableDictionary* _sectionIDsToOrderedBulletins;
	NSArray* _todaySnippetBulletinOrder;
	NSArray* _tomorrowSnippetBulletinOrder;
	SBBBSectionInfo* _todaySectionInfo;
	SBBBSectionInfo* _tomorrowSectionInfo;
	id _pendingVisibleWidgetCompletion;
	CGSize _cachedContentSize;
}
@property(readonly, assign, nonatomic) NSSet* visibleWidgetIDs;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(float)_todayWidgetAndTomorrowSectionHeaderViewHeightForLayoutMode:(int)layoutMode;
-(BOOL)canRemoveViewOnDismissal:(id)dismissal;
-(int)bulletinViewController:(id)controller insertionAnimationForBulletin:(id)bulletin inSection:(id)section;
-(void)updateWidgetsWithIdentifiers:(id)identifiers launchStats:(id)stats completion:(id)completion;
-(void)_refreshWidget:(id)widget launchStats:(id)stats completion:(id)completion;
-(int)_nextSequenceNumber;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(void)enableAllWidgets:(id)widgets;
-(void)makeVisibleWidgetWithIdentifier:(id)identifier animated:(BOOL)animated completion:(id)completion;
-(void)_enableWidgetsPassingTest:(id)test completion:(id)completion;
-(id)widgetWithIdentifier:(id)identifier;
-(void)hostDidDismiss;
-(void)hostWillDismiss;
-(void)hostDidPresent;
-(void)hostWillPresent;
-(void)setWidgetDelegate:(id)delegate;
-(int)activeLayoutModeForWidget:(id)widget;
-(BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)widget;
-(void)contentAvailabilityDidChangeForWidget:(id)contentAvailability;
-(id)_widgetHandlingBulletinViewController;
-(void)commitReplacementWithBulletin:(id)bulletin ofBulletin:(id)bulletin2 inSection:(id)section;
-(void)commitRemovalOfBulletin:(id)bulletin fromSection:(id)section;
-(void)commitInsertionOfBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section forFeed:(unsigned)feed;
-(void)_sortBulletinsForSectionWithIdentifier:(id)identifier referencingOrder:(id)order;
-(id)_bulletinOrderStringForBulletinInfo:(id)bulletinInfo;
-(id)_tomorrowSnippetBulletinOrder;
-(id)_todaySnippetBulletinOrder;
-(void)commitReloadOfSections:(id)sections;
-(void)commitRemovalOfSection:(id)section;
-(void)commitInsertionOfSection:(id)section beforeSection:(id)section2;
-(id)todayTableFooterView;
-(id)todayTableHeaderView;
-(id)infoForWidgetSection:(id)widgetSection;
-(id)infoForBulletin:(id)bulletin inSection:(id)section forFeed:(unsigned)feed;
-(id)infoForBulletinSection:(id)bulletinSection;
-(id)widgetForSection:(id)section;
-(void)invalidateContentLayout;
-(CGSize)contentSize;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
-(void)widgetsEditButtonTapped:(id)tapped;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)transitionToContentUnavailableViewIfNecessary;
-(void)insertAppropriateViewWithContent;
-(void)forceUpdateTableHeader;
-(void)updateTableHeaderIfNecessary;
-(void)_updateTableHeader:(BOOL)header;
-(void)_updateTableFooter;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

