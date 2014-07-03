SQFCompareColors
================

A category method on `UIColor` which compares colours regardless of colour
space.

Based on an answer on [Stack Overflow](http://stackoverflow.com/a/8899384/816002)
by [Sam Vermette](http://stackoverflow.com/users/87158/samvermette).

### The issue
When comparing UIColor using the `isEqual:` method, if the two colors
exist in two different colour spaces, then the comparison returns
false.

### The solution
The solution is to convert the colour to RGB colour space before comparing

### Example

```
UIColor *clearColor = [UIColor clearColor]; // UIDeviceWhiteColorSpace 0 0
UIColor *otherColor = [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.0]; // UIDeviceRGBColorSpace 0 0 0 0

BOOL isEqual = [clearColor isEqual:otherColor]; // Returns NO
BOOL isEqualTo = [clearColor isEqualToColor:otherColor]; // Returns YES
```
