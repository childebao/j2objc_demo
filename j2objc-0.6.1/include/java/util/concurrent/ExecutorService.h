//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/Classes/java/util/concurrent/ExecutorService.java
//
//  Created by tball on 2/19/13.
//

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

#import "JreEmulation.h"
#import "java/util/concurrent/Executor.h"

@protocol JavaUtilConcurrentExecutorService < JavaUtilConcurrentExecutor, NSObject >
- (void)shutdown;
- (id<JavaUtilList>)shutdownNow;
- (BOOL)isShutdown;
- (BOOL)isTerminated;
- (BOOL)awaitTerminationWithLongInt:(long long int)timeout
 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;
- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;
- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;
- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                        withLongInt:(long long int)timeout
                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;
- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;
- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                          withLongInt:(long long int)timeout
   withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;
@end
