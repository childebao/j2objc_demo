//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/lang/ClassNotFoundException.java
//
//  Created by tball on 2/19/13.
//

@class JavaLangThrowable;

#import "JreEmulation.h"
#import "java/lang/Exception.h"

#define JavaLangClassNotFoundException_serialVersionUID 9176873029745254542

@interface JavaLangClassNotFoundException : JavaLangException {
 @public
  JavaLangThrowable *ex_;
}

@property (nonatomic, retain) JavaLangThrowable *ex;

- (id)init;
- (id)initWithNSString:(NSString *)detailMessage;
- (id)initWithNSString:(NSString *)detailMessage
 withJavaLangThrowable:(JavaLangThrowable *)exception;
- (JavaLangThrowable *)getException;
- (JavaLangThrowable *)getCause;
@end
