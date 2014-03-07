//
//  NSData+BTUtils.h
//
//  Version 1.3
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

#import <UIKit/UIKit.h>

@interface UIView (BTUtils)

/**
 Returns masked view with rounded corners.
 @param corners A bitmask value that identifies the corners that you want rounded. You can use this parameter to round only a subset of the corners of the rectangle.
 @param radius A radius value applied to mask.
 */
- (void)maskRoundCorners:(UIRectCorner)corners radius:(CGFloat)radius;

/**
 Gets frame size.
 */
- (CGSize)size;

/**
 Sets frame size.
 @param size Frame size.
 */
- (void)setSize:(CGSize)size;

/**
 Gets frame width.
 */
- (CGFloat)width;

/**
 Sets frame width.
 @param width Frame width.
 */
- (void)setWidth:(CGFloat)width;

/**
 Gets frame height.
 */
- (CGFloat)height;

/**
 Sets frame height.
 @param height Frame height.
 */
- (void)setHeight:(CGFloat)height;

/**
 Gets frame x origin.
 */
- (CGFloat)x;

/**
 Sets frame x origin.
 @param originX origin.x.
 */
- (void)setX:(CGFloat)originX;

/**
 Gets frame y origin.
 */
- (CGFloat)y;

/**
 Sets frame y origin.
 @param originY origin.y.
 */
- (void)setY:(CGFloat)originY;

@end
