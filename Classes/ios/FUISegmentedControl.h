//
//  FUISegmentedControl.h
//  FlatUIKitExample
//
//  Created by Alex Medearis on 5/17/13.
//
//

#import <UIKit/UIKit.h>

@interface FUISegmentedControl : UISegmentedControl

@property(nonatomic, readwrite) UIColor *selectedColor;
@property(nonatomic, readwrite) UIColor *deselectedColor;
@property(nonatomic, readwrite) CGFloat cornerRadius;


@end
