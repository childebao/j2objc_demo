//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/util/AbstractQueue.java
//
//  Created by tball on 2/19/13.
//

@protocol JavaUtilCollection;

#import "JreEmulation.h"
#import "java/util/AbstractCollection.h"
#import "java/util/Queue.h"

@interface JavaUtilAbstractQueue : JavaUtilAbstractCollection < JavaUtilQueue > {
}

- (id)init;
- (BOOL)addWithId:(id)o;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;
- (id)remove;
- (id)element;
- (void)clear;
@end
