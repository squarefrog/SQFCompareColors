//
//  UIColor+IsEqualToColor.h
//
//  Created by Paul Williamson on 03/07/2014.
//

#import <UIKit/UIKit.h>

/**
 * A category method on `UIColor` which compares colours regardless of colour
 * space.
 *
 * Based on an answer on [Stack Overflow](http://stackoverflow.com/a/8899384/816002)
 * by [Sam Vermette](http://stackoverflow.com/users/87158/samvermette).
 */

@interface UIColor (IsEqualToColor)

/**
 * Compare two colours, regardless of colour space.
 * @param otherColor The colour to compare `self` to
 * @return The comparison result
 */
- (BOOL)isEqualToColor:(UIColor *)otherColor;

@end
