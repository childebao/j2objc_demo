//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadOnlyShortArrayBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSShortArray;
@class JavaNioShortBuffer;

#import "JreEmulation.h"
#import "java/nio/ShortArrayBuffer.h"

@interface JavaNioReadOnlyShortArrayBuffer : JavaNioShortArrayBuffer {
}

+ (JavaNioReadOnlyShortArrayBuffer *)copy__WithJavaNioShortArrayBuffer:(JavaNioShortArrayBuffer *)other
                                                               withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithInt:(int)capacity
withJavaLangShortArray:(IOSShortArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioShortBuffer *)asReadOnlyBuffer;
- (JavaNioShortBuffer *)compact;
- (JavaNioShortBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSShortArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioShortBuffer *)putWithJavaNioShortBuffer:(JavaNioShortBuffer *)buf;
- (JavaNioShortBuffer *)putWithShortInt:(short int)c;
- (JavaNioShortBuffer *)putWithInt:(int)index
                      withShortInt:(short int)c;
- (JavaNioShortBuffer *)putWithJavaLangShortArray:(IOSShortArray *)src
                                          withInt:(int)off
                                          withInt:(int)len;
- (JavaNioShortBuffer *)slice;
@end
