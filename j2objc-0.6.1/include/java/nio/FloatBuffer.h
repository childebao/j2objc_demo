//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/FloatBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSFloatArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#import "java/lang/Comparable.h"
#import "java/nio/Buffer.h"

@interface JavaNioFloatBuffer : JavaNioBuffer < JavaLangComparable > {
}

+ (JavaNioFloatBuffer *)allocateWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioFloatBuffer *)wrapWithJavaLangFloatArray:(IOSFloatArray *)array;
+ (JavaNioFloatBuffer *)wrapWithJavaLangFloatArray:(IOSFloatArray *)array
                                           withInt:(int)start
                                           withInt:(int)len;
- (id)initWithInt:(int)capacity;
- (IOSFloatArray *)array;
- (int)arrayOffset;
- (JavaNioFloatBuffer *)asReadOnlyBuffer;
- (JavaNioFloatBuffer *)compact;
- (int)compareToWithId:(JavaNioFloatBuffer *)otherBuffer;
- (JavaNioFloatBuffer *)duplicate;
- (BOOL)isEqual:(id)other;
- (float)get;
- (JavaNioFloatBuffer *)getWithJavaLangFloatArray:(IOSFloatArray *)dest;
- (JavaNioFloatBuffer *)getWithJavaLangFloatArray:(IOSFloatArray *)dest
                                          withInt:(int)off
                                          withInt:(int)len;
- (float)getWithInt:(int)index;
- (BOOL)hasArray;
- (NSUInteger)hash;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
- (IOSFloatArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioFloatBuffer *)putWithFloat:(float)f;
- (JavaNioFloatBuffer *)putWithJavaLangFloatArray:(IOSFloatArray *)src;
- (JavaNioFloatBuffer *)putWithJavaLangFloatArray:(IOSFloatArray *)src
                                          withInt:(int)off
                                          withInt:(int)len;
- (JavaNioFloatBuffer *)putWithJavaNioFloatBuffer:(JavaNioFloatBuffer *)src;
- (JavaNioFloatBuffer *)putWithInt:(int)index
                         withFloat:(float)f;
- (JavaNioFloatBuffer *)slice;
- (NSString *)description;
@end