//
//  TinySegmenter.h
//  by tnantoka (Born Neet)
//
//  Original:
//   TinySegmenter 0.1 -- Super compact Japanese tokenizer in Javascript
//   (c) 2008 Taku Kudo <taku@chasen.org>
//   TinySegmenter is freely distributable under the terms of a new BSD licence.
//   For details, see http://chasen.org/~taku/software/TinySegmenter/LICENCE.txt
//


#import <Foundation/Foundation.h>
#import "OnigRegexp.h"
//#import "CocoaOniguruma/OnigRegexp.h"

//extern const int BIAS;

@interface TinySegmenter : NSObject {

	NSMutableArray* chartype_;
	
	int BIAS;
	NSDictionary* BC1__;
	NSDictionary* BC2__;
	NSDictionary* BC3__;
	NSDictionary* BP1__;
	NSDictionary* BP2__;
	NSDictionary* BQ1__;
	NSDictionary* BQ2__;
	NSDictionary* BQ3__;
	NSDictionary* BQ4__;
	NSDictionary* BW1__;
	NSDictionary* BW2__;
	NSDictionary* BW3__;
	NSDictionary* TC1__;
	NSDictionary* TC2__;
	NSDictionary* TC3__;
	NSDictionary* TC4__;
	NSDictionary* TQ1__;
	NSDictionary* TQ2__;
	NSDictionary* TQ3__;
	NSDictionary* TQ4__;
	NSDictionary* TW1__;
	NSDictionary* TW2__;
	NSDictionary* TW3__;
	NSDictionary* TW4__;
	NSDictionary* UC1__;
	NSDictionary* UC2__;
	NSDictionary* UC3__;
	NSDictionary* UC4__;
	NSDictionary* UC5__;
	NSDictionary* UC6__;
	NSDictionary* UP1__;
	NSDictionary* UP2__;
	NSDictionary* UP3__;
	NSDictionary* UQ1__;
	NSDictionary* UQ2__;
	NSDictionary* UQ3__;
	NSDictionary* UW1__;
	NSDictionary* UW2__;
	NSDictionary* UW3__;
	NSDictionary* UW4__;
	NSDictionary* UW5__;
	NSDictionary* UW6__;
	
}

- (NSString*) ctype_: (NSString*) str;

- (int) ts_: (id) v;

- (NSMutableArray*) segment: (NSString*) input;


@end
