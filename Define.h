//
//  Define.h
//  neungyuleTenEnglish
//
//  Created by hokun on 11. 7. 18..
//  Copyright 2011 CLBee System. All rights reserved.
//

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define MY_APPDELEGATE          (AppDelegate*)[[UIApplication sharedApplication] delegate]

#define NUM(x)                  [NSNumber numberWithInt:x]
#define SETBOOL(x)              [NSNumber numberWithBool:x]

#define FONTSIZE(pt)            [UIFont systemFontOfSize:pt]
#define BOLDFONTSIZE(pt)        [UIFont boldSystemFontOfSize:pt]
#define ITALICFONTSIZE(pt)      [UIFont italicSystemFontOfSize:pt]

#define DOCUMENTSPATH           [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define TEMPPATH                [NSHomeDirectory() stringByAppendingPathComponent:@"tmp"]
#define RESOURCEPATH            [[NSBundle mainBundle] resourcePath]

#define RANDOMNUMBER(MAX)       arc4random() % (MAX+1);

#define RGBCOLOR(r,g,b)         [UIColor colorWithRed:(float)r/255.0 green:(float)g/255.0 blue:(float)b/255.0 alpha:1.0]
#define RGBACOLOR(r,g,b,a)      [UIColor colorWithRed:(float)r/255.0 green:(float)g/255.0 blue:(float)b/255.0 alpha:(float)a]

#define COLOR_WHITE             [UIColor whiteColor]
#define COLOR_BLACK             [UIColor blackColor]
#define COLOR_BLUE              RGBCOLOR(0,0,255)
#define COLOR_RED               RGBCOLOR(255,0,0)
#define COLOR_YELLOW            [UIColor yellowColor]
#define CLEARCOLOR              [UIColor clearColor]
