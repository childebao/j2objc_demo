//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/android/libcore/luni/src/main/java/java/text/ParseException.java
//
//  Created by tball on 2/19/13.
//

#import "JreEmulation.h"
#import "java/lang/Exception.h"

#define JavaTextParseException_serialVersionUID 2703218443322787634

@interface JavaTextParseException : JavaLangException {
 @public
  int errorOffset_;
}

@property (nonatomic, assign) int errorOffset;

- (id)initWithNSString:(NSString *)detailMessage
               withInt:(int)location;
- (int)getErrorOffset;
@end
