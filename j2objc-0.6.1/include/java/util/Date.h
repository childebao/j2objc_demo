//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/android/libcore/luni/src/main/java/java/util/Date.java
//
//  Created by tball on 2/19/13.
//

@class IOSObjectArray;
@class JavaLangStringBuilder;

#import "JreEmulation.h"
#import "java/io/Serializable.h"
#import "java/lang/Comparable.h"

#define JavaUtilDate_serialVersionUID 7523967970034938905

@interface JavaUtilDate : NSObject < JavaIoSerializable, NSCopying, JavaLangComparable > {
 @public
  long long int milliseconds_;
}

@property (nonatomic, assign) long long int milliseconds;

+ (int)creationYear;
+ (void)setCreationYearWithInt:(int)creationYear;
- (id)init;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day
          withInt:(int)hour
          withInt:(int)minute;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day
          withInt:(int)hour
          withInt:(int)minute
          withInt:(int)second;
- (id)initWithLongInt:(long long int)milliseconds;
- (id)initWithNSString:(NSString *)string;
- (BOOL)afterWithJavaUtilDate:(JavaUtilDate *)date;
- (BOOL)beforeWithJavaUtilDate:(JavaUtilDate *)date;
- (id)clone;
- (int)compareToWithId:(JavaUtilDate *)date;
- (BOOL)isEqual:(id)object;
- (int)getDate;
- (int)getDay;
- (int)getHours;
- (int)getMinutes;
- (int)getMonth;
- (int)getSeconds;
- (long long int)getTime;
- (int)getTimezoneOffset;
- (int)getYear;
- (NSUInteger)hash;
+ (int)parseWithNSString:(NSString *)string
       withNSStringArray:(IOSObjectArray *)array;
+ (long long int)parseWithNSString:(NSString *)string;
- (void)setDateWithInt:(int)day;
- (void)setHoursWithInt:(int)hour;
- (void)setMinutesWithInt:(int)minute;
- (void)setMonthWithInt:(int)month;
- (void)setSecondsWithInt:(int)second;
- (void)setTimeWithLongInt:(long long int)milliseconds;
- (void)setYearWithInt:(int)year;
+ (void)appendTwoDigitsWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                                         withInt:(int)n;
+ (long long int)UTCWithInt:(int)year
                    withInt:(int)month
                    withInt:(int)day
                    withInt:(int)hour
                    withInt:(int)minute
                    withInt:(int)second;
+ (int)zoneWithNSString:(NSString *)text;
- (id)copyWithZone:(NSZone *)zone;
@end
