//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/util/AbstractList.java
//
//  Created by tball on 2/19/13.
//

@class JavaUtilAbstractList;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#import "java/util/AbstractCollection.h"
#import "java/util/AbstractList.h"
#import "java/util/Iterator.h"
#import "java/util/List.h"
#import "java/util/ListIterator.h"
#import "java/util/RandomAccess.h"

@interface JavaUtilAbstractList_SimpleListIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilAbstractList *this$0_;
  int numLeft_;
  int expectedModCount_;
  int lastPosition_;
}

@property (nonatomic, retain) JavaUtilAbstractList *this$0;
@property (nonatomic, assign) int numLeft;
@property (nonatomic, assign) int expectedModCount;
@property (nonatomic, assign) int lastPosition;

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)outer$0;
@end

@interface JavaUtilAbstractList_FullListIterator : JavaUtilAbstractList_SimpleListIterator < JavaUtilListIterator > {
 @public
  JavaUtilAbstractList *this$1_;
}

@property (nonatomic, retain) JavaUtilAbstractList *this$1;

- (id)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)outer$1
                           withInt:(int)start;
- (void)addWithId:(id)object;
- (BOOL)hasPrevious;
- (int)nextIndex;
- (id)previous;
- (int)previousIndex;
- (void)setWithId:(id)object;
@end

@interface JavaUtilAbstractList : JavaUtilAbstractCollection < JavaUtilList > {
 @public
  int modCount_;
}

@property (nonatomic, assign) int modCount;

- (id)init;
- (void)addWithInt:(int)location
            withId:(id)object;
- (BOOL)addWithId:(id)object;
- (BOOL)addAllWithInt:(int)location
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)clear;
- (BOOL)isEqual:(id)object;
- (id)getWithInt:(int)location;
- (NSUInteger)hash;
- (int)indexOfWithId:(id)object;
- (id<JavaUtilIterator>)iterator;
- (int)lastIndexOfWithId:(id)object;
- (id<JavaUtilListIterator>)listIterator;
- (id<JavaUtilListIterator>)listIteratorWithInt:(int)location;
- (id)removeWithInt:(int)location;
- (void)removeRangeWithInt:(int)start
                   withInt:(int)end;
- (id)setWithInt:(int)location
          withId:(id)object;
- (id<JavaUtilList>)subListWithInt:(int)start
                           withInt:(int)end;
@end

@interface JavaUtilAbstractList_SubAbstractList : JavaUtilAbstractList {
 @public
  JavaUtilAbstractList *fullList_;
  int offset_;
  int size__;
}

@property (nonatomic, retain) JavaUtilAbstractList *fullList;
@property (nonatomic, assign) int offset;
@property (nonatomic, assign) int size_;

- (id)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)list
                           withInt:(int)start
                           withInt:(int)end;
- (void)addWithInt:(int)location
            withId:(id)object;
- (BOOL)addAllWithInt:(int)location
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id)getWithInt:(int)location;
- (id<JavaUtilIterator>)iterator;
- (id<JavaUtilListIterator>)listIteratorWithInt:(int)location;
- (id)removeWithInt:(int)location;
- (void)removeRangeWithInt:(int)start
                   withInt:(int)end;
- (id)setWithInt:(int)location
          withId:(id)object;
- (int)size;
- (void)sizeChangedWithBOOL:(BOOL)increment;
@end

@interface JavaUtilAbstractList_SubAbstractListRandomAccess : JavaUtilAbstractList_SubAbstractList < JavaUtilRandomAccess > {
}

- (id)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)list
                           withInt:(int)start
                           withInt:(int)end;
@end

@interface JavaUtilAbstractList_SubAbstractList_SubAbstractListIterator : NSObject < JavaUtilListIterator > {
 @public
  JavaUtilAbstractList_SubAbstractList *subList_;
  id<JavaUtilListIterator> iterator_;
  int start_;
  int end_;
}

@property (nonatomic, retain) JavaUtilAbstractList_SubAbstractList *subList;
@property (nonatomic, retain) id<JavaUtilListIterator> iterator;
@property (nonatomic, assign) int start;
@property (nonatomic, assign) int end;

- (id)initWithJavaUtilListIterator:(id<JavaUtilListIterator>)it
withJavaUtilAbstractList_SubAbstractList:(JavaUtilAbstractList_SubAbstractList *)list
                           withInt:(int)offset
                           withInt:(int)length;
- (void)addWithId:(id)object;
- (BOOL)hasNext;
- (BOOL)hasPrevious;
- (id)next;
- (int)nextIndex;
- (id)previous;
- (int)previousIndex;
- (void)remove;
- (void)setWithId:(id)object;
@end
