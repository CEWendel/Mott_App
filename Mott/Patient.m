//
//  Patient.m
//  Mott
//
//  Created by Chris Wendel on 1/15/12.
//  Copyright (c) 2012 University of Michigan. All rights reserved.
//

#import "Patient.h"

@implementation Patient
@synthesize firstName,lastName,location,databaseImagePath,thumbnailImagePath;

-(id)initWithFirstName:(NSString*)first lastName:(NSString*)last location:(NSString*)loc databaseImagePath:(NSString*)
dbImagePath thumbnailImagePath:(NSString*)thumbImagePath
{
    self.firstName = first;
    self.lastName = last;
    self.location = loc;
    self.databaseImagePath = dbImagePath;
    self.thumbnailImagePath = thumbImagePath;
    return self;
}


@end
