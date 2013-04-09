//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadOnlyFloatArrayBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSFloatArray;
@class JavaNioFloatBuffer;

#import "JreEmulation.h"
#import "java/nio/FloatArrayBuffer.h"

@interface JavaNioReadOnlyFloatArrayBuffer : JavaNioFloatArrayBuffer {
}

+ (JavaNioReadOnlyFloatArrayBuffer *)copy__WithJavaNioFloatArrayBuffer:(JavaNioFloatArrayBuffer *)other
                                                               withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithInt:(int)capacity
withJavaLangFloatArray:(IOSFloatArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioFloatBuffer *)asReadOnlyBuffer;
- (JavaNioFloatBuffer *)compact;
- (JavaNioFloatBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSFloatArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioFloatBuffer *)putWithFloat:(float)c;
- (JavaNioFloatBuffer *)putWithInt:(int)index
                         withFloat:(float)c;
- (JavaNioFloatBuffer *)putWithJavaNioFloatBuffer:(JavaNioFloatBuffer *)buf;
- (JavaNioFloatBuffer *)putWithJavaLangFloatArray:(IOSFloatArray *)src
                                          withInt:(int)off
                                          withInt:(int)len;
- (JavaNioFloatBuffer *)slice;
@end
