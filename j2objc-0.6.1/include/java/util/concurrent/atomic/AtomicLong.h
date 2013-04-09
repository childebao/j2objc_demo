//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/Classes/java/util/concurrent/atomic/AtomicLong.java
//
//  Created by tball on 2/19/13.
//

#import "JreEmulation.h"
#import "java/io/Serializable.h"

@interface JavaUtilConcurrentAtomicAtomicLong : NSNumber < JavaIoSerializable > {
 @public
  long long int value_;
}

@property (nonatomic, assign) long long int value;

- (id)initWithLongInt:(long long int)initialValue;
- (id)init;
- (long long int)get;
- (void)setWithLongInt:(long long int)newValue;
- (void)lazySetWithLongInt:(long long int)newValue;
- (long long int)getAndSetWithLongInt:(long long int)newValue;
- (BOOL)compareAndSetWithLongInt:(long long int)expect
                     withLongInt:(long long int)update;
- (long long int)getAndIncrement;
- (long long int)getAndDecrement;
- (long long int)getAndAddWithLongInt:(long long int)delta;
- (long long int)incrementAndGet;
- (long long int)decrementAndGet;
- (long long int)addAndGetWithLongInt:(long long int)delta;
- (NSString *)description;
- (int)intValue;
- (long long int)longValue;
- (float)floatValue;
- (double)doubleValue;
@end
