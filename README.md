


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

● To set the chatbot ID, use

	  [[floatbotManager sharedManager] setFLB_BOT_ID:BOT_ID];
    
● To set the chatbot token/key, use

    [[floatbotManager sharedManager] setFLB_KEY:KEY];

● To set the chatbot name, use

   	[[floatbotManager sharedManager] setBOT_NAME:BOT_NAME];

● To display sessions list, add following optional method 

  	[[floatbotManager sharedManager] setShowSessionList:YES/NO];

  This will take user directly to chat screen if value passed is NO

● Optionally, you can set the mobile number of the user to identify the user.
Note: PHONE_NO passed to above method should be the number prefixed with the country code and without “+”.Ex. 9110000001 

    [[floatbotManager sharedManager] setPHONE_NUMBER_WITH_COUNTRY_CODE:PHONE_NO];





