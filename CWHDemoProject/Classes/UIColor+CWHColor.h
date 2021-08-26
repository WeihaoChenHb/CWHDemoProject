//
//  UIColor+CWHColor.h
//  RSSDemo
//
//  Created by CWH on 2021/8/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (CWHColor)

+ (UIColor *) colorWithHexString:(NSString *)color;

+ (UIColor *) colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

- (nullable NSString *)hexString;

- (nullable NSString *)hexStringWithAlpha;

@end

NS_ASSUME_NONNULL_END
