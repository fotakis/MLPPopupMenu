//
//  MLPopupMenu.h
//  MLPopupMenu
//
//  Created by Javier Figueroa on 4/10/13.
//  Copyright (c) 2013 Mainloop LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    MLPopupMenuUp = 0,
    MLPopupMenuDown = 1
} MLPopupDirection;

@interface MLPPopupMenu : UITableView

- (id)initWithDataSource:(id<UITableViewDataSource>)dataSource
        andDelegate:(id<UITableViewDelegate>)delegate;

- (id)initWithDataSource:(id<UITableViewDataSource>)dataSource
             andDelegate:(id<UITableViewDelegate>)delegate
direction:(MLPopupDirection) direction
widthPadding:(NSInteger) widthPadding
heightPadding:(NSInteger) heightPadding;


//Determines if the menu has been popped
@property (nonatomic, assign) BOOL isPopped;
//Determines the menu direction up, down
@property (nonatomic, assign) MLPopupDirection direction;
@property (nonatomic, assign) NSInteger heightPadding;
@property (nonatomic, assign) NSInteger widthPadding;

//Pops menu from event touched view. Usually made to work with UIBarButtonItem Events
- (void)popInWithEvent:(UIEvent*)event;

//Pops menu from a tab bar item
- (void)popInTabBar:(UITabBar*)tabBar forItemAtIndex:(NSInteger)index;

//Pops menu with default padding
- (void)popInView:(UIView*)view;

//Pops menu with padding
//- (void)popInView:(UIView*)view andPadding:(NSInteger)padding;

//- (void)popInView:(UIView*)view widthPadding:(NSInteger)padding heightPadding:(NSInteger) heightPadding;
- (void)hide;

@end
