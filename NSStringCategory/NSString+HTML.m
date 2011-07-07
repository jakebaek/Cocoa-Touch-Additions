//
//  NSString+HTML.m
//
//  Created by hokun on 11. 6. 28..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "NSString+HTML.h"

@implementation NSString (HTML)

+ (NSString*)flattenHTML:(NSString*)html 
{
    NSScanner *theScanner;
    NSString *text = nil;
    
    theScanner = [NSScanner scannerWithString:html];
    
    while ([theScanner isAtEnd] == NO) 
    {
        // find start of tag
        [theScanner scanUpToString:@"<" intoString:NULL] ; 
        
        // find end of tag
        [theScanner scanUpToString:@">" intoString:&text] ;
        
        // replace the found tag with a space
        //(you can filter multi-spaces out later if you wish)
        html = [html stringByReplacingOccurrencesOfString:[ NSString stringWithFormat:@"%@>", text] withString:@" "];
        
    } // while //
    
    return html;
}

@end
