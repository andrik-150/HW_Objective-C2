//
//  Rectangle.h
//  HW_Objective-C_2
//
//  Created by Григорий Кононов on 02.09.2023.
//

#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Rectangle : Figure {
@private CGFloat _sideA;
@private CGFloat _sideB;
}

-(instancetype) init: (CGFloat)sideA sideB: (CGFloat)sideB;
-(instancetype) init: (CGFloat)side;

@end

NS_ASSUME_NONNULL_END
