//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadOnlyIntArrayBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSIntArray;
@class JavaNioIntBuffer;

#import "JreEmulation.h"
#import "java/nio/IntArrayBuffer.h"

@interface JavaNioReadOnlyIntArrayBuffer : JavaNioIntArrayBuffer {
}

+ (JavaNioReadOnlyIntArrayBuffer *)copy__WithJavaNioIntArrayBuffer:(JavaNioIntArrayBuffer *)other
                                                           withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithInt:(int)capacity
withJavaLangIntegerArray:(IOSIntArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioIntBuffer *)asReadOnlyBuffer;
- (JavaNioIntBuffer *)compact;
- (JavaNioIntBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSIntArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioIntBuffer *)putWithInt:(int)c;
- (JavaNioIntBuffer *)putWithInt:(int)index
                         withInt:(int)c;
- (JavaNioIntBuffer *)putWithJavaNioIntBuffer:(JavaNioIntBuffer *)buf;
- (JavaNioIntBuffer *)putWithJavaLangIntegerArray:(IOSIntArray *)src
                                          withInt:(int)off
                                          withInt:(int)len;
- (JavaNioIntBuffer *)slice;
@end
