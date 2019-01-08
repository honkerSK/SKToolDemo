//
//  UIView+SKFrame.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIView (SKFrame)

// Shortcuts for frame properties
@property (nonatomic , assign) CGSize  sk_size;
@property (nonatomic , assign) CGPoint sk_origin;

// Shortcuts for the positions
@property (nonatomic , assign) CGFloat sk_x;
@property (nonatomic , assign) CGFloat sk_y;
@property (nonatomic , assign) CGFloat sk_width;
@property (nonatomic , assign) CGFloat sk_height;

@property (nonatomic , assign) CGFloat sk_centerX;
@property (nonatomic , assign) CGFloat sk_centerY;

// Shortcuts for the coords
@property (nonatomic , assign) CGFloat sk_top;
@property (nonatomic , assign) CGFloat sk_bottom;
@property (nonatomic , assign) CGFloat sk_left;
@property (nonatomic , assign) CGFloat sk_right;


/* 判断视图是否有重叠 */
- (BOOL)intersectWithView:(UIView *)view;
/* 加载xib */
+ (instancetype)sk_viewFromXib;

- (BOOL)isShowingOnKeyWindow;



@end

