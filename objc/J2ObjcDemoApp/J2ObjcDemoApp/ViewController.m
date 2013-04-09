//
//  ViewController.m
//  J2ObjcDemoApp
//
//  Created by Tobias Schröpf on 09.04.13.
//  Copyright (c) 2013 jambit GmbH. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

    NSLog(@"%s -- Welcome to my j2objc demo!", __PRETTY_FUNCTION__);
    NSLog(@"%s -- Here in this App I really would like to sort an array of some really cool items!", __PRETTY_FUNCTION__);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
