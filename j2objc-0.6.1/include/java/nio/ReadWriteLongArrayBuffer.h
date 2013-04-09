//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadWriteLongArrayBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSLongArray;
@class JavaNioLongBuffer;

#import "JreEmulation.h"
#import "java/nio/LongArrayBuffer.h"

@interface JavaNioReadWriteLongArrayBuffer : JavaNioLongArrayBuffer {
}

+ (JavaNioReadWriteLongArrayBuffer *)copy__WithJavaNioLongArrayBuffer:(JavaNioLongArrayBuffer *)other
                                                              withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithJavaLangLongArray:(IOSLongArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
withJavaLangLongArray:(IOSLongArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioLongBuffer *)asReadOnlyBuffer;
- (JavaNioLongBuffer *)compact;
- (JavaNioLongBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSLongArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioLongBuffer *)putWithLongInt:(long long int)c;
- (JavaNioLongBuffer *)putWithInt:(int)index
                      withLongInt:(long long int)c;
- (JavaNioLongBuffer *)putWithJavaLangLongArray:(IOSLongArray *)src
                                        withInt:(int)off
                                        withInt:(int)len;
- (JavaNioLongBuffer *)slice;
@end
