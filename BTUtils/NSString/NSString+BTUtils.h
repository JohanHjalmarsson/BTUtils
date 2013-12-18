//
//  NSString+BTUtils.h
//
//  Version 1.0
//
//  Created by Borut Tomazin on 8/30/2013.
//  Copyright 2013 Borut Tomazin
//
//  Distributed under the permissive zlib License
//  Get the latest version from here:
//
//  https://github.com/borut-t/BTUtils
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//

#import <Foundation/Foundation.h>

@interface NSString (BTUtils)

/**
 Decode all HTML entities using GTM.
 */
- (NSString *)stringByDecodingHTMLEntities;

/**
 Encode all HTML entities using GTM
 */
- (NSString *)stringByEncodingHTMLEntities;

/**
 Strip HTML tags from HTML string to plain text.
 */
- (NSString *)stringByConvertingHTMLToPlainText;

/**
 Get index of character within string.
 */
- (NSUInteger)indexOf:(NSString *)character;

/**
 Returns url encoded string.
 */
- (NSString *)urlEncode;

/**
 Trims leading and trailing whitespaces from given string.
 */
- (NSString *)trim;

/**
 Creates an NSData object containing the base64 decoded representation of the base64 string.
 */
- (NSData *)dataFromBase64String;



#pragma mark - Crypto
/**
 MD5 crypto hash.
 */
- (NSString *)MD5;

/**
 SHA1 crypto hash.
 */
- (NSString *)SHA1;

@end
