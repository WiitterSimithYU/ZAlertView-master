//
//  UIColor+Hexadecimal.h
//  Miaomai
//
//  Created by 你好，色彩 on 16/9/8.
//  Copyright © 2016年 yjfzcz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hexadecimal)
/** 颜色数字 -> color */
+ (UIColor*) colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
/** 颜色数字 -> color */
+ (UIColor*) colorWithHex:(NSInteger)hexValue;
/** color -> 颜色数字 */
+ (NSString *) hexFromUIColor: (UIColor*)color;
/** NSString -> color */
+ (UIColor *) colorWithHexString: (NSString *)color;
@end
