/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface CGHTTPZlib : _ABAddressBookAddRecord
{
    struct z_stream_s *zstream;
}

- (void)dealloc;
- (id)decompressBytes:(const void *)fp8 length:(unsigned int)fp12 withMethod:(int)fp16;
- (id)decompressData:(id)fp8 withMethod:(int)fp12;
- (id)newDataWithDecompressedBytes:(const void *)fp8 length:(unsigned int)fp12 withMethod:(int)fp16;
- (id)newDataWithDecompressedData:(id)fp8 withMethod:(int)fp12;

@end
