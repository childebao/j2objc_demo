//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/CharArrayBuffer.java
//
//  Created by tball on 2/19/13.
//

@class IOSCharArray;
@class JavaNioByteOrder;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#import "java/nio/CharBuffer.h"

@interface JavaNioCharArrayBuffer : JavaNioCharBuffer {
 @public
  IOSCharArray *backingArray_;
  int offset_;
}

@property (nonatomic, retain) IOSCharArray *backingArray;
@property (nonatomic, assign) int offset;

- (id)initWithJavaLangCharacterArray:(IOSCharArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
withJavaLangCharacterArray:(IOSCharArray *)backingArray
          withInt:(int)offset;
- (unichar)get;
- (unichar)getWithInt:(int)index;
- (JavaNioCharBuffer *)getWithJavaLangCharacterArray:(IOSCharArray *)dest
                                             withInt:(int)off
                                             withInt:(int)len;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
- (id<JavaLangCharSequence>)subSequenceFrom:(int)start to:(int)end;
- (NSString *)sequenceDescription;
@end
