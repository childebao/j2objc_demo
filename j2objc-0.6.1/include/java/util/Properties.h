//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/Classes/java/util/Properties.java
//
//  Created by tball on 2/19/13.
//

@protocol JavaUtilEnumeration;

#import "JreEmulation.h"
#import "java/util/Hashtable.h"

@interface JavaUtilProperties : JavaUtilHashtable {
}

- (NSString *)getPropertyWithNSString:(NSString *)key;
- (NSString *)getPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)defaultValue;
- (NSString *)setPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)value;
- (id<JavaUtilEnumeration>)propertyNames;
@end
