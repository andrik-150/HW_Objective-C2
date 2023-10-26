//
//  Circle.h
//  HW_Objective-C_2
//
//  Created by Григорий Кононов on 02.09.2023.
//

#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Circle : Figure{
@private CGFloat _radius;
}

-(instancetype) init: (CGFloat)radius;

@end

NS_ASSUME_NONNULL_END
