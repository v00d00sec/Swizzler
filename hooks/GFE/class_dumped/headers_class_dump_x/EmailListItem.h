/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "CacheObjectProperyAssigning-Protocol.h"

@class NSDate, NSString;

@interface EmailListItem : _ABAddressBookAddRecord <CacheObjectProperyAssigning>
{
    BOOL _isImportant;
    BOOL _hasBeenRead;
    BOOL _markedForDelete;
    BOOL _dominoEncrypted;
    BOOL _multiSelected;
    BOOL _isSubjectRTL;
    BOOL _isPreviewTextRTL;
    BOOL _isUserDeleted;
    unsigned int _messageId;
    unsigned int _folderId;
    NSString *_address;
    NSString *_subject;
    NSString *_previewText;
    NSDate *_date;
    unsigned int _flagForFollowup;
    int _messageType;
    unsigned long _calendarId;
    long _calendarInstance;
    int _smimeSecState;
    int _smimeSecStatus;
    int _classification;
    int _caveat;
    unsigned long _emailId;
    NSString *_trimmedSubject;
    NSString *_conversationUID;
    unsigned int _attachmentCount;
    NSString *_voiceOverDate;
    NSString *_voiceOverDateTime;
}

+ (id)trimSubjectRegex;
+ (void)initialize;
- (void)setVoiceOverDateTime:(id)fp8;
- (id)voiceOverDateTime;
- (void)setVoiceOverDate:(id)fp8;
- (id)voiceOverDate;
- (void)setAttachmentCount:(unsigned int)fp8;
- (unsigned int)attachmentCount;
- (void)setConversationUID:(id)fp8;
- (id)trimmedSubject;
- (void)setIsUserDeleted:(BOOL)fp8;
- (BOOL)isUserDeleted;
- (void)setIsPreviewTextRTL:(BOOL)fp8;
- (BOOL)isPreviewTextRTL;
- (void)setIsSubjectRTL:(BOOL)fp8;
- (BOOL)isSubjectRTL;
- (void)setMultiSelected:(BOOL)fp8;
- (BOOL)multiSelected;
- (void)setEmailId:(unsigned long)fp8;
- (unsigned long)emailId;
- (void)setDominoEncrypted:(BOOL)fp8;
- (BOOL)dominoEncrypted;
- (void)setCaveat:(int)fp8;
- (int)caveat;
- (void)setClassification:(int)fp8;
- (int)classification;
- (void)setSmimeSecStatus:(int)fp8;
- (int)smimeSecStatus;
- (void)setSmimeSecState:(int)fp8;
- (int)smimeSecState;
- (void)setCalendarInstance:(long)fp8;
- (long)calendarInstance;
- (void)setCalendarId:(unsigned long)fp8;
- (unsigned long)calendarId;
- (void)setMessageType:(int)fp8;
- (int)messageType;
- (void)setMarkedForDelete:(BOOL)fp8;
- (BOOL)markedForDelete;
- (void)setHasBeenRead:(BOOL)fp8;
- (BOOL)hasBeenRead;
- (void)setFlagForFollowup:(unsigned int)fp8;
- (unsigned int)flagForFollowup;
- (void)setIsImportant:(BOOL)fp8;
- (BOOL)isImportant;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setPreviewText:(id)fp8;
- (id)previewText;
- (id)subject;
- (void)setAddress:(id)fp8;
- (id)address;
- (void)setFolderId:(unsigned int)fp8;
- (unsigned int)folderId;
- (void)setMessageId:(unsigned int)fp8;
- (unsigned int)messageId;
- (id)conversationUID;
- (void)assignPropertiesFromObject:(id)fp8;
- (void)setSubject:(id)fp8;
- (id)timeDisplay;
- (id)dateDisplay;
- (id)description;
- (id)truncateString:(id)fp8 toLength:(int)fp12;
- (BOOL)isEqual:(id)fp8;
- (id)init;
- (void)dealloc;

@end
