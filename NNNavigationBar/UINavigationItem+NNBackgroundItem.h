//
//  UINavigationItem+NNBackgroundItem.h
//  NNNavigationBar
//
//  Created by GuHaijun on 2018/4/11.
//  Copyright © 2018年 GuHaijun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationItem (NNBackgroundItem)

@property (nonatomic, strong) UIColor *nn_backgroundColor;
@property (nonatomic, strong) UIImage *nn_backgroundImage;


/* In general, you should specify a value for the normal state to be used by other states which don't have a custom value set.
 
 Similarly, when a property is dependent on the bar metrics (on the iPhone in landscape orientation, bars have a different height from standard), be sure to specify a value for UIBarMetricsDefault.
 */

- (void)setBackgroundImage:(nullable UIImage *)backgroundImage forBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (nullable UIImage *)backgroundImageForBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;

/*
 Same as using UIBarPositionAny in -setBackgroundImage:forBarPosition:barMetrics. Resizable images will be stretched
 vertically if necessary when the navigation bar is in the position UIBarPositionTopAttached.
 */
- (void)setBackgroundImage:(nullable UIImage *)backgroundImage forBarMetrics:(UIBarMetrics)barMetrics;
- (nullable UIImage *)backgroundImageForBarMetrics:(UIBarMetrics)barMetrics;


- (void)setBackgroundColor:(nullable UIColor *)backgroundColor forBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (nullable UIColor *)backgroundColorForBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;

- (void)setBackgroundColor:(nullable UIColor *)backgroundImage forBarMetrics:(UIBarMetrics)barMetrics;
- (nullable UIColor *)backgroundColorForBarPosition:(UIBarMetrics)barMetrics;

@end
