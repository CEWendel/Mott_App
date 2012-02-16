//
//  Patient.h
//  Mott
//
//  Created by Chris Wendel on 1/15/12.
//  Copyright (c) 2012 University of Michigan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Patient : NSObject
{
    NSString *firstName;
    NSString *lastName;
    NSString *location;
    NSString *databaseImagePath;
    NSString *thumbnailImagePath;
}
@property(nonatomic,retain)NSString *firstName;
@property(nonatomic,retain)NSString *lastName;
@property(nonatomic,retain)NSString *location;
@property(nonatomic,retain)NSString *databaseImagePath;
@property(nonatomic,retain)NSString *thumbnailImagePath;

-(id)initWithFirstName:(NSString*)first lastName:(NSString*)last location:(NSString*)location databaseImagePath:(NSString*)
dbImagePath thumbnailImagePath:(NSString*)thumbImagePath;
@end
