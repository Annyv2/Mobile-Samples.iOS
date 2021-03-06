// A0Errors.h
//
// Copyright (c) 2014 Auth0 (http://auth0.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "A0ErrorCode.h"

@interface A0Errors : NSObject

+ (NSError *)noConnectionNameFound;

+ (NSError *)notConnectedToInternetError;

+ (NSError *)invalidUsername;

+ (NSError *)invalidEmail;

+ (NSError *)invalidPassword;

+ (NSError *)invalidRepeatPassword;

+ (NSError *)configurationLoadFailed;

///----------------------------------------
/// @name Login Errors
///----------------------------------------

+ (NSError *)invalidLoginCredentialsUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidLoginUsernameUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidLoginPassword;

///----------------------------------------
/// @name Sign Up Errors
///----------------------------------------

+ (NSError *)invalidSignUpCredentialsUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidSignUpUsernameUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidSignUpPassword;

///----------------------------------------
/// @name Change Password Errors
///----------------------------------------

+ (NSError *)invalidChangePasswordCredentialsUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidChangePasswordUsernameUsingEmail:(BOOL)usesEmail;
+ (NSError *)invalidChangePasswordPassword;
+ (NSError *)invalidChangePasswordRepeatPassword;
+ (NSError *)invalidChangePasswordRepeatPasswordAndPassword;

///----------------------------------------
/// @name Enterprise & Social Errors
///----------------------------------------

+ (NSError *)failedLoginWithConnectionName:(NSString *)connectionName for:(NSError *)error;
+ (NSError *)urlSchemeNotRegistered;
+ (NSError *)unkownProviderForConnectionName:(NSString *)connectionName;
+ (NSError *)facebookCancelled;
+ (NSError *)twitterAppNotAuthorized;
+ (NSError *)twitterAppOauthNotAuthorized;
+ (NSError *)twitterCancelled;
+ (NSError *)twitterNotConfigured;
+ (NSError *)twitterInvalidAccount;
+ (NSError *)auth0CancelledForConnectionName:(NSString *)connectionName;
+ (NSError *)auth0NotAuthorizedForConnectionName:(NSString *)connectionName;
+ (NSError *)auth0InvalidConfigurationForConnectionName:(NSString *)connectionName;
+ (NSError *)googleplusFailed;
+ (NSError *)googleplusCancelled;

///----------------------------------------
/// @name Localized Messages
///----------------------------------------

+ (NSString *)localizedStringForConnectionName:(NSString *)connectionName loginError:(NSError *)error;
+ (NSString *)localizedStringForLoginError:(NSError *)error;
+ (NSString *)localizedStringForSMSLoginError:(NSError *)error;
+ (NSString *)localizedStringForSignUpError:(NSError *)error;
+ (NSString *)localizedStringForChangePasswordError:(NSError *)error;

@end
