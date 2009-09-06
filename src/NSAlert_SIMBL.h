/**
 * Copyright 2003-2009, Mike Solomon <mas63@cornell.edu>
 * SIMBL is released under the GNU General Public License v2.
 * http://www.opensource.org/licenses/gpl-2.0.php
 */

#import <Foundation/Foundation.h>

@interface NSAlert (SIMBLAlert)

+ (void) errorAlert:(NSString*)_message withDetails:(NSString*)_details, ...;

@end
