/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDWebView : _CATransform3DMakeScale
{
}

+ (id)keyForUIWebView:(id)fp8;
+ (void)setDataDelegate:(id)fp8 forUIWebView:(id)fp12;
+ (void)setConnectionDelegate:(id)fp8 forUIWebView:(id)fp12;
+ (void)removeAttributesForUIWebView:(id)fp8;
+ (id)attributesForUIWebView:(id)fp8;
+ (void)setDocumentURL:(id)fp8 onUIWebView:(id)fp12;
+ (id)tagRequest:(id)fp8 forUIWebView:(id)fp12;
+ (BOOL)protocolRequest:(id)fp8 willSendRequestForAuthenticationChallenge:(id)fp12;
+ (void)protocolRequest:(id)fp8 didConnectVia:(id)fp12;
+ (BOOL)protocolRequest:(id)fp8 willConnectVia:(id *)fp12;
+ (void)protocolDidFinishLoadingForRequest:(id)fp8;
+ (void)protocolRequest:(id)fp8 didFailWithError:(id)fp12;
+ (void)protocolRequest:(id)fp8 didReceiveData:(id)fp12;
+ (void)protocolRequest:(id)fp8 didReceiveResponse:(id)fp12;
+ (BOOL)protocolWillSendRequest:(id *)fp8;
+ (void)invoke:(id)fp8 andManageArgAt:(int)fp12;
+ (void)invoke3:(id)fp8;
+ (void)invoke2:(id)fp8;
+ (void)invoke:(id)fp8;
+ (id)safeDictionary:(id)fp8 objectForKey:(id)fp12;
+ (void)safeDictionaryRemoveAllObjects:(id)fp8;
+ (void)safeDictionaryRemoveObject:(id)fp8 forKey:(id)fp12;
+ (void)safeDictionary:(id)fp8 setObject:(id)fp12 forKey:(id)fp16;
+ (id)rootDomain:(id)fp8;
+ (id)connectionDelegateThread:(id)fp8;
+ (id)connectionDelegate:(id)fp8;
+ (id)dataDelegateThread:(id)fp8;
+ (id)dataDelegate:(id)fp8;
+ (BOOL)isMemberOfDomain:(id)fp8 domain:(id)fp12;
+ (id)attributesForRequest:(id)fp8 ensuringDefaultHasDelegateFor:(id)fp12 ensuringDefaultRespondsTo:(SEL)fp16;
+ (void)finalise;
+ (void)initialise;
+ (id)registry;

@end

