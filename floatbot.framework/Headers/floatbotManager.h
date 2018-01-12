//
//  floatbotManager.h
//  floatbot
//
//  Created by Jhanvi on 05/12/17.
//  Copyright © 2017 Jhanvi. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface floatbotManager : NSObject
{
    BOOL isZOROUser;
}
@property (nonatomic) BOOL isZOROUser;
/**
    Sets floatbot-key of chatbot
 */
@property (nonatomic, retain) NSString *FLB_KEY;
/**
    Sets BOT-ID of chatbot
 */
@property (nonatomic, retain) NSString *FLB_BOT_ID;
/**
    Sets user's mobile number
 */
@property (nonatomic, retain) NSString *PHONE_NUMBER_WITH_COUNTRY_CODE;
/**
    Sets the name of the chatbot to display on floatbot chat window
 */
@property (nonatomic, retain) NSString *BOT_NAME;

+ (id)sharedManager;
/**
    Prints string passed on the console area
 */
+ (void)log:(NSString *)sLogStr;
/**
    Returns "TRUE" if user is connected to server
 */
+ (BOOL)isConnected;
/**
    Connects to the floatbot server
 */
- (void)setAndConnect;
/**
    Sends PushToken to the floatbot server
 */
+ (void)setToken:(NSData *)tokenData;
/**
    Opens new floatbot chat window on the UIViewController passed as an arguement
 */
+ (void)startChatWithViewController:(UIViewController *)viewC;
@end

