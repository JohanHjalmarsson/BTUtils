//
//  NSArray+BTUtils.m
//
//  Version 1.4
//
//  Created by Borut Tomazin on 12/19/2014.
//  Copyright 2015 Borut Tomazin
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

#import "NSArray+BTUtils.h"

@implementation NSArray (BTUtils)

- (NSArray *)reversedArray
{
    NSMutableArray *reversedArray = [NSMutableArray arrayWithCapacity:self.count];
    for (id element in [self reverseObjectEnumerator]) {
        [reversedArray addObject:element];
    }
    return [NSArray arrayWithArray:reversedArray];
}

@end