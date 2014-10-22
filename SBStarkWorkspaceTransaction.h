/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBAlertManagerObserver.h"

@class SBAlertManager, NSString, SBStarkScreenController;

__attribute__((visibility("hidden")))
@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {
	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;
	SBAlertManager* _mainScreenAlertManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBAlertManager* starkScreenAlertManager;
@property(readonly, retain, nonatomic) SBStarkScreenController* starkScreenController;
@property(readonly, retain, nonatomic) SBAlertManager* mainScreenAlertManager;
-(void)_didComplete;
-(void)dealloc;
-(id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller;
@end
