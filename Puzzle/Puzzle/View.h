//
//  View.h
//  Puzzle
//
//  Created by NYU User on 11/3/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TileView;

@interface View: UIView {
	NSUInteger n;			//number of rows (same as number of columns)
	NSUInteger emptyRow;	//location of empty position
	NSUInteger emptyCol;
	CGFloat margin;			//width in pixels
	NSSet *set;				//pointers to the n*n-1 TileViews
}

- (void) place: (TileView *) tileView atRow: (NSUInteger) row col: (NSUInteger) col;

@property (nonatomic, assign) NSUInteger emptyRow;
@property (nonatomic, assign) NSUInteger emptyCol;
@end
