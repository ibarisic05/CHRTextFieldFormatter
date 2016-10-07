//
//  CHRUSPhoneNumberMask.h
//  CHRTextFieldFormatterTest
//
//  Created by Ricardo Barroso on 30/09/2016.
//  Copyright © 2016 Ricardo Barroso. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CHRTextMask.h"

@interface CHRUSPhoneNumberMask : NSObject <CHRTextMask>

/**
 Specifies not editable phone number prefix.
 
 Phone number prefix will be separated by a whitespace from the actual phone number.
 */
@property (nonatomic, copy) NSString *prefix;

@end
