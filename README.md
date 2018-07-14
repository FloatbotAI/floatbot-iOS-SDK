


<p align="center"><img src="https://floatbot.ai/portal/asset/img/icons/floatbot.png" alt="SlackKit" width="500"/></p>

![Swift Version](https://img.shields.io/badge/Swift-4.0.3-orange.svg)
![Plaforms](https://img.shields.io/badge/Platforms-android,iOS-lightgrey.svg)
[![SwiftPM compatible](https://img.shields.io/badge/SwiftPM-compatible-brightgreen.svg)](https://github.com/apple/swift-package-manager)
[![CocoaPods compatible](https://img.shields.io/badge/CocoaPods-compatible-brightgreen.svg)](https://cocoapods.org)


# Description
SDK allows the iOS app to integrate with floatbot.ai for iPhone and iPad devices

[About Floatbot](http://floatbot.ai)

# Prerequisite

• Bot_ID

• Token/Key

You can get Bot_ID and Token for your app from https://floatbot.ai/portal/dashboard/login

# Requirements

• Xcode 9.0

•	iOS 8.0+

# Dependencies

•	SDWebImage

• AFNetworking

# Installation

  CocoaPods (recommended)
  For Cocoa Pods Integration

  Step 1 : Create a Podfile in your project's root directory, if it doesn't exist yet

  Step 2 : Add the floatbot in Podfile under your desired target:
   
    For latest release in cocoapods
    pod 'floatbot'

  Step 3 : Run pod pod repo update && pod install

  Step 4 : Open your project using the generated *.xcworkspace file.

# Getting Started
  Visit https://floatbot.ai/developers

## Usage
### The Basics

• To set the chatbot ID, use

	  [[floatbotManager sharedManager] setFLB_BOT_ID:BOT_ID];
    
• To set the chatbot token/key, use

    [[floatbotManager sharedManager] setFLB_KEY:KEY];

• To set the chatbot name, use

   	[[floatbotManager sharedManager] setBOT_NAME:BOT_NAME];

• To display sessions list, add following optional method 

  	[[floatbotManager sharedManager] setShowSessionList:YES/NO];

  This will take user directly to chat screen if value passed is NO

• Optionally, you can set the mobile number of the user to identify the user.
Note: PHONE_NO passed to above method should be the number prefixed with the country code and without “+”.Ex. 9110000001 

    [[floatbotManager sharedManager] setPHONE_NUMBER_WITH_COUNTRY_CODE:PHONE_NO];

• To set the hash value for each user, add following method
                           
    [[floatbotManager sharedManager] setHash:hashString];

• To initialize user and load chat screen, add the following method (i.e. onButtonClick or when app launches or after user is validated), Pass UIViewController object as input parameter

    [floatbotManager startChatWithViewController:self];

• To set chat screen as root view controller, use

    [[floatbotManager sharedManager] setAsRootViewController:TRUE];

• To send APNS token to floatbot server to receive push notification, use

    [floatbotManager setToken:deviceToken];

### Theme customization

You can customize the chat screen using following optional methods

1) To set incoming message bubble background color

    [[floatbotManager sharedManager] setIncomingMessageBubbleColor:[UIColor redColor]];

2) To set outgoing message bubble background color

    [[floatbotManager sharedManager] setOutgoingMessageBubbleColor:[UIColor redColor]];


3) To set incoming message text color

    [[floatbotManager sharedManager] setIncomingMessageTextColor:[UIColor redColor]];

4) To set outgoing message text color

    [[floatbotManager sharedManager] setOutgoingMessageTextColor:[UIColor redColor]];




