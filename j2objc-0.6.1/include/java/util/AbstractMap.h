//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/util/AbstractMap.java
//
//  Created by tball on 2/19/13.
//

@class JavaUtilAbstractMap_KeySet;
@class JavaUtilAbstractMap_ValuesCollection;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#import "java/util/AbstractCollection.h"
#import "java/util/AbstractSet.h"
#import "java/util/Iterator.h"
#import "java/util/Map.h"

@interface JavaUtilAbstractMap : NSObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet__;
  id<JavaUtilCollection> valuesCollection_;
}

@property (nonatomic, retain) id<JavaUtilSet> keySet_;
@property (nonatomic, retain) id<JavaUtilCollection> valuesCollection;

- (id)init;
- (void)clear;
- (BOOL)containsKeyWithId:(id)key;
- (BOOL)containsValueWithId:(id)value;
- (id<JavaUtilSet>)entrySet;
- (BOOL)isEqual:(id)object;
- (id)getWithId:(id)key;
- (NSUInteger)hash;
- (BOOL)isEmpty;
- (id<JavaUtilSet>)keySet;
- (id)putWithId:(id)key
         withId:(id)value;
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;
- (id)removeWithId:(id)key;
- (int)size;
- (NSString *)description;
- (id<JavaUtilCollection>)values;
- (id)clone;
@end

@interface JavaUtilAbstractMap_KeySet : JavaUtilAbstractSet {
 @public
  JavaUtilAbstractMap *this$0_;
}

@property (nonatomic, assign) JavaUtilAbstractMap *this$0;

- (BOOL)containsWithId:(id)object;
- (int)size;
- (id<JavaUtilIterator>)iterator;
- (id)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$0;
@end

@interface JavaUtilAbstractMap_KeySet_$1 : NSObject < JavaUtilIterator > {
 @public
  JavaUtilAbstractMap_KeySet *this$0_;
  id<JavaUtilIterator> setIterator_;
}

@property (nonatomic, retain) JavaUtilAbstractMap_KeySet *this$0;
@property (nonatomic, retain) id<JavaUtilIterator> setIterator;

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilAbstractMap_KeySet:(JavaUtilAbstractMap_KeySet *)outer$0;
@end

@interface JavaUtilAbstractMap_ValuesCollection : JavaUtilAbstractCollection {
 @public
  JavaUtilAbstractMap *this$0_;
}

@property (nonatomic, assign) JavaUtilAbstractMap *this$0;

- (int)size;
- (BOOL)containsWithId:(id)object;
- (id<JavaUtilIterator>)iterator;
- (id)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$0;
@end

@interface JavaUtilAbstractMap_ValuesCollection_$1 : NSObject < JavaUtilIterator > {
 @public
  JavaUtilAbstractMap_ValuesCollection *this$0_;
  id<JavaUtilIterator> setIterator_;
}

@property (nonatomic, retain) JavaUtilAbstractMap_ValuesCollection *this$0;
@property (nonatomic, retain) id<JavaUtilIterator> setIterator;

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilAbstractMap_ValuesCollection:(JavaUtilAbstractMap_ValuesCollection *)outer$0;
@end
