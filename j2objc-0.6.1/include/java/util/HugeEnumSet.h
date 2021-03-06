//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/util/HugeEnumSet.java
//
//  Created by tball on 2/19/13.
//

@class IOSLongArray;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#import "java/util/EnumSet.h"
#import "java/util/Iterator.h"

#define JavaUtilHugeEnumSet_BIT_IN_LONG 64

@interface JavaUtilHugeEnumSet : JavaUtilEnumSet {
 @public
  IOSObjectArray *enums_;
  IOSLongArray *bits_;
  int size__;
}

@property (nonatomic, retain) IOSObjectArray *enums;
@property (nonatomic, retain) IOSLongArray *bits;
@property (nonatomic, assign) int size_;

- (id)initWithIOSClass:(IOSClass *)elementType;
- (BOOL)addWithId:(JavaLangEnum *)element;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (int)size;
- (void)clear;
- (void)complement;
- (BOOL)containsWithId:(id)object;
- (JavaUtilHugeEnumSet *)clone;
- (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)isEqual:(id)object;
- (id<JavaUtilIterator>)iterator;
- (BOOL)removeWithId:(id)object;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)setRangeWithId:(JavaLangEnum *)start
                withId:(JavaLangEnum *)end;
@end

@interface JavaUtilHugeEnumSet_HugeEnumSetIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilHugeEnumSet *this$0_;
  long long int currentBits_;
  int index_;
  long long int mask_;
  JavaLangEnum *last_;
}

@property (nonatomic, retain) JavaUtilHugeEnumSet *this$0;
@property (nonatomic, assign) long long int currentBits;
@property (nonatomic, assign) int index;
@property (nonatomic, assign) long long int mask;
@property (nonatomic, retain) JavaLangEnum *last;

- (id)initWithJavaUtilHugeEnumSet:(JavaUtilHugeEnumSet *)outer$0;
- (void)computeNextElement;
- (BOOL)hasNext;
- (JavaLangEnum *)next;
- (void)remove;
@end
