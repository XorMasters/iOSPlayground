//
//  ToDoItem.h
//  ToDoList
//
//  Created by Allan Knight on 4/5/15.
//  Copyright (c) 2015 Allan Knight. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
