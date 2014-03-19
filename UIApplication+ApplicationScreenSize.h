//
//  UIApplication+ApplicationScreenSize.h
//  AutoLayoutSample
//
//  Created by iMac1 on 19/03/14.


#import <UIKit/UIKit.h>

@interface UIApplication (ApplicationScreenSize)

+(CGSize) currentScreenSize;
+(CGSize) sizeInOrientation:(UIInterfaceOrientation)orientation;
@end
