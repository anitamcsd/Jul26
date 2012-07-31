//
//  TileView.h
//  Puzzle
//
//  Created by NYU User on 11/3/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface TileView: UIImageView {
	View *view;
	NSUInteger row;	//current position of this tile
	NSUInteger col;
}

- (id) initWithView: (View *) v row: (NSUInteger) r col: (NSUInteger) c;
@end
