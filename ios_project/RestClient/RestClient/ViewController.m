//
//  ViewController.m
//  RestClient
//
//  Created by Ahmet Alsan on 09/03/2017.
//  Copyright © 2017 cortex. All rights reserved.
//

#import "ViewController.h"
#import "RCApiHandshake.h"
#import "RCHandshakeResultRecord.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    RCApiHandshake *api = [RCApiHandshake create];
    RCHandshakeResultRecord *result = [api handshake:@"" appVersion:@"" osVersion:@"" osType:@""];
    NSLog(@"%@", result.responseStatus);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
