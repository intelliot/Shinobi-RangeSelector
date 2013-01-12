//
//  ShinobiRangeAnnotationManager.h
//  RangeSelector
//
//  Created by Sam Davies on 26/12/2012.
//  Copyright (c) 2012 Shinobi Controls. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ShinobiCharts/ShinobiChart.h>
#import "ShinobiRangeAnnotationDelegate.h"

@interface ShinobiRangeAnnotationManager : NSObject

@property (nonatomic, strong) id<ShinobiRangeAnnotationDelegate> delegate;

- (id)initWithChart:(ShinobiChart *)chart;
- (id)initWithChart:(ShinobiChart *)chart minimumSpan:(CGFloat)minSpan;
- (void)moveRangeSelectorToRange:(SChartRange *)range;

@end
