#import <Cocoa/Cocoa.h>

#import "SpectacleWindowAction.h"

@class SpectacleAccessibilityElement;

@interface SpectacleScreenDetector : NSObject

- (NSScreen *)screenWithAction:(SpectacleWindowAction *)action
        frontmostWindowElement:(SpectacleAccessibilityElement *)frontmostWindowElement
                       screens:(NSArray<NSScreen *> *)screens
                    mainScreen:(NSScreen *)mainScreen;

@end