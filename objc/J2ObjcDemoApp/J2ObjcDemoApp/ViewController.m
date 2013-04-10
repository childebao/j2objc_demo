//
//  ViewController.m
//  J2ObjcDemoApp
//
//  Created by Tobias Schröpf on 09.04.13.
//  Copyright (c) 2013 jambit GmbH. All rights reserved.
//

#import "ViewController.h"
#import "BubbleSortAlgorithm.h"
#import "java/util/ArrayList.h"
#import "java/util/Collection.h"
#import "java/lang/Integer.h"
#import "SortableItem.h"
#import "ItemType.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

    NSLog(@"%s -- Welcome to my j2objc demo!", __PRETTY_FUNCTION__);
    NSLog(@"%s -- Here in this App I really would like to sort an array of some really cool items!", __PRETTY_FUNCTION__);

    id<JavaUtilList> aBunchOfItems = [[JavaUtilArrayList alloc] init];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:5] withNSString:@"Item number five" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:9] withNSString:@"Item number nine" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:0] withNSString:@"Item number zero" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:7] withNSString:@"Item number seven" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:3] withNSString:@"Item number three" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:8] withNSString:@"Item number eight" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:1] withNSString:@"Item number one" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:6] withNSString:@"Item number six" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:4] withNSString:@"Item number four" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) NIL_CHK(aBunchOfItems)) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:2] withNSString:@"Item number two" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    
    ComJambitJ2ojbcdemoappUtilBubbleSortAlgorithm *sortingAlgorithm = [ComJambitJ2ojbcdemoappUtilBubbleSortAlgorithm new];
    id<JavaUtilList> sortedList = [sortingAlgorithm sortByKeyWithJavaUtilList:aBunchOfItems];
    NSLog(@"%s -- Unsorted List: %@", __PRETTY_FUNCTION__, aBunchOfItems);
    NSLog(@"%s -- Sorted List: %@", __PRETTY_FUNCTION__, sortedList);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
