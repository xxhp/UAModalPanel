//
//  UAGradientBackground.h
//  Mobilize
//
//  Created by Matt Coneybeare on 9/22/09.
//  Copyright 2009 coneybeare. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
	UAGradientBackgroundStyleRadial = 0,
	UAGradientBackgroundStyleRadialReversed,
	UAGradientBackgroundStyleLinear,
	UAGradientBackgroundStyleLinearReversed,
	UAGradientBackgroundStyleCenterHighlight,
} UAGradientBackgroundStyle;

typedef enum {
	UAGradientLineModeNone = 0,
	UAGradientLineModeTop = 2,
	UAGradientLineModeBottom = 4,
	UAGradientLineModeTopAndBottom = 8
} UAGradientLineMode;

@interface UAGradientBackground : UIView {
	int					gradientStyle;
	CGFloat				*colorComponents;
	UAGradientLineMode	lineMode;
}

- (id)initWithFrame:(CGRect)frame style:(UAGradientBackgroundStyle)aStyle color:(CGFloat *)components lineMode:(UAGradientLineMode)lineModes;
- (id)initWithFrame:(CGRect)frame color:(CGFloat *)components;
- (id)initWithFrame:(CGRect)frame style:(UAGradientBackgroundStyle)aStyle;
- (id)initWithFrame:(CGRect)frame;

- (void)setColorComponents:(CGFloat *)components;

+ (id)gradientWithFrame:(CGRect)frame style:(UAGradientBackgroundStyle)aStyle color:(CGFloat *)components lineMode:(UAGradientLineMode)lineModes;
+ (id)gradientWithFrame:(CGRect)frame color:(CGFloat *)components;
+ (id)gradientWithFrame:(CGRect)frame style:(UAGradientBackgroundStyle)aStyle;
+ (id)gradientWithFrame:(CGRect)frame;
@end
