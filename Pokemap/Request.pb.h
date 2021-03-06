// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class AuthInfo;
@class AuthInfoBuilder;
@class AuthTicket;
@class AuthTicketBuilder;
@class GetMapObjectsMessage;
@class GetMapObjectsMessageBuilder;
@class JWT;
@class JWTBuilder;
@class Request;
@class RequestBuilder;
@class RequestEnvelope;
@class RequestEnvelopeBuilder;
@class RequestEnvelopeUnknown6;
@class RequestEnvelopeUnknown6Builder;
@class RequestEnvelopeUnknown6Unknown2;
@class RequestEnvelopeUnknown6Unknown2Builder;


typedef NS_ENUM(SInt32, RequestType) {
  RequestTypeMethodUnset = 0,
  RequestTypePlayerUpdate = 1,
  RequestTypeGetPlayer = 2,
  RequestTypeGetInventory = 4,
  RequestTypeDownloadSettings = 5,
  RequestTypeDownloadItemTemplates = 6,
  RequestTypeDownloadRemoteConfigVersion = 7,
  RequestTypeFortSearch = 101,
  RequestTypeEncounter = 102,
  RequestTypeCatchPokemon = 103,
  RequestTypeFortDetails = 104,
  RequestTypeItemUse = 105,
  RequestTypeGetMapObjects = 106,
  RequestTypeFortDeployPokemon = 110,
  RequestTypeFortRecallPokemon = 111,
  RequestTypeReleasePokemon = 112,
  RequestTypeUseItemPotion = 113,
  RequestTypeUseItemCapture = 114,
  RequestTypeUseItemFlee = 115,
  RequestTypeUseItemRevive = 116,
  RequestTypeTradeSearch = 117,
  RequestTypeTradeOffer = 118,
  RequestTypeTradeResponse = 119,
  RequestTypeTradeResult = 120,
  RequestTypeGetPlayerProfile = 121,
  RequestTypeGetItemPack = 122,
  RequestTypeBuyItemPack = 123,
  RequestTypeBuyGemPack = 124,
  RequestTypeEvolvePokemon = 125,
  RequestTypeGetHatchedEggs = 126,
  RequestTypeEncounterTutorialComplete = 127,
  RequestTypeLevelUpRewards = 128,
  RequestTypeCheckAwardedBadges = 129,
  RequestTypeUseItemGym = 133,
  RequestTypeGetGymDetails = 134,
  RequestTypeStartGymBattle = 135,
  RequestTypeAttackGym = 136,
  RequestTypeRecycleInventoryItem = 137,
  RequestTypeCollectDailyBonus = 138,
  RequestTypeUseItemXpBoost = 139,
  RequestTypeUseItemEggIncubator = 140,
  RequestTypeUseIncense = 141,
  RequestTypeGetIncensePokemon = 142,
  RequestTypeIncenseEncounter = 143,
  RequestTypeAddFortModifier = 144,
  RequestTypeDiskEncounter = 145,
  RequestTypeCollectDailyDefenderBonus = 146,
  RequestTypeUpgradePokemon = 147,
  RequestTypeSetFavoritePokemon = 148,
  RequestTypeNicknamePokemon = 149,
  RequestTypeEquipBadge = 150,
  RequestTypeSetContactSettings = 151,
  RequestTypeGetAssetDigest = 300,
  RequestTypeGetDownloadUrls = 301,
  RequestTypeGetSuggestedCodenames = 401,
  RequestTypeCheckCodenameAvailable = 402,
  RequestTypeClaimCodename = 403,
  RequestTypeSetAvatar = 404,
  RequestTypeSetPlayerTeam = 405,
  RequestTypeMarkTutorialComplete = 406,
  RequestTypeLoadSpawnPoints = 500,
  RequestTypeEcho = 666,
  RequestTypeDebugUpdateInventory = 700,
  RequestTypeDebugDeletePlayer = 701,
  RequestTypeSfidaRegistration = 800,
  RequestTypeSfidaActionLog = 801,
  RequestTypeSfidaCertification = 802,
  RequestTypeSfidaUpdate = 803,
  RequestTypeSfidaAction = 804,
  RequestTypeSfidaDowser = 805,
  RequestTypeSfidaCapture = 806,
};

BOOL RequestTypeIsValidValue(RequestType value);
NSString *NSStringFromRequestType(RequestType value);


@interface RequestRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define RequestEnvelope_status_code @"statusCode"
#define RequestEnvelope_request_id @"requestId"
#define RequestEnvelope_requests @"requests"
#define RequestEnvelope_unknown6 @"unknown6"
#define RequestEnvelope_latitude @"latitude"
#define RequestEnvelope_longitude @"longitude"
#define RequestEnvelope_altitude @"altitude"
#define RequestEnvelope_auth_info @"authInfo"
#define RequestEnvelope_auth_ticket @"authTicket"
#define RequestEnvelope_unknown12 @"unknown12"
@interface RequestEnvelope : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLatitude_:1;
  BOOL hasLongitude_:1;
  BOOL hasAltitude_:1;
  BOOL hasUnknown12_:1;
  BOOL hasRequestId_:1;
  BOOL hasStatusCode_:1;
  BOOL hasUnknown6_:1;
  BOOL hasAuthInfo_:1;
  BOOL hasAuthTicket_:1;
  Float64 latitude;
  Float64 longitude;
  Float64 altitude;
  SInt64 unknown12;
  UInt64 requestId;
  SInt32 statusCode;
  RequestEnvelopeUnknown6* unknown6;
  AuthInfo* authInfo;
  AuthTicket* authTicket;
  NSMutableArray * requestsArray;
}
- (BOOL) hasStatusCode;
- (BOOL) hasRequestId;
- (BOOL) hasUnknown6;
- (BOOL) hasLatitude;
- (BOOL) hasLongitude;
- (BOOL) hasAltitude;
- (BOOL) hasAuthInfo;
- (BOOL) hasAuthTicket;
- (BOOL) hasUnknown12;
@property (readonly) SInt32 statusCode;
@property (readonly) UInt64 requestId;
@property (readonly, strong) NSArray * requests;
@property (readonly, strong) RequestEnvelopeUnknown6* unknown6;
@property (readonly) Float64 latitude;
@property (readonly) Float64 longitude;
@property (readonly) Float64 altitude;
@property (readonly, strong) AuthInfo* authInfo;
@property (readonly, strong) AuthTicket* authTicket;
@property (readonly) SInt64 unknown12;
- (Request*)requestsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestEnvelopeBuilder*) builder;
+ (RequestEnvelopeBuilder*) builder;
+ (RequestEnvelopeBuilder*) builderWithPrototype:(RequestEnvelope*) prototype;
- (RequestEnvelopeBuilder*) toBuilder;

+ (RequestEnvelope*) parseFromData:(NSData*) data;
+ (RequestEnvelope*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelope*) parseFromInputStream:(NSInputStream*) input;
+ (RequestEnvelope*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelope*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RequestEnvelope*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestEnvelopeBuilder : PBGeneratedMessageBuilder {
@private
  RequestEnvelope* resultRequestEnvelope;
}

- (RequestEnvelope*) defaultInstance;

- (RequestEnvelopeBuilder*) clear;
- (RequestEnvelopeBuilder*) clone;

- (RequestEnvelope*) build;
- (RequestEnvelope*) buildPartial;

- (RequestEnvelopeBuilder*) mergeFrom:(RequestEnvelope*) other;
- (RequestEnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestEnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatusCode;
- (SInt32) statusCode;
- (RequestEnvelopeBuilder*) setStatusCode:(SInt32) value;
- (RequestEnvelopeBuilder*) clearStatusCode;

- (BOOL) hasRequestId;
- (UInt64) requestId;
- (RequestEnvelopeBuilder*) setRequestId:(UInt64) value;
- (RequestEnvelopeBuilder*) clearRequestId;

- (NSMutableArray *)requests;
- (Request*)requestsAtIndex:(NSUInteger)index;
- (RequestEnvelopeBuilder *)addRequests:(Request*)value;
- (RequestEnvelopeBuilder *)setRequestsArray:(NSArray *)array;
- (RequestEnvelopeBuilder *)clearRequests;

- (BOOL) hasUnknown6;
- (RequestEnvelopeUnknown6*) unknown6;
- (RequestEnvelopeBuilder*) setUnknown6:(RequestEnvelopeUnknown6*) value;
- (RequestEnvelopeBuilder*) setUnknown6Builder:(RequestEnvelopeUnknown6Builder*) builderForValue;
- (RequestEnvelopeBuilder*) mergeUnknown6:(RequestEnvelopeUnknown6*) value;
- (RequestEnvelopeBuilder*) clearUnknown6;

- (BOOL) hasLatitude;
- (Float64) latitude;
- (RequestEnvelopeBuilder*) setLatitude:(Float64) value;
- (RequestEnvelopeBuilder*) clearLatitude;

- (BOOL) hasLongitude;
- (Float64) longitude;
- (RequestEnvelopeBuilder*) setLongitude:(Float64) value;
- (RequestEnvelopeBuilder*) clearLongitude;

- (BOOL) hasAltitude;
- (Float64) altitude;
- (RequestEnvelopeBuilder*) setAltitude:(Float64) value;
- (RequestEnvelopeBuilder*) clearAltitude;

- (BOOL) hasAuthInfo;
- (AuthInfo*) authInfo;
- (RequestEnvelopeBuilder*) setAuthInfo:(AuthInfo*) value;
- (RequestEnvelopeBuilder*) setAuthInfoBuilder:(AuthInfoBuilder*) builderForValue;
- (RequestEnvelopeBuilder*) mergeAuthInfo:(AuthInfo*) value;
- (RequestEnvelopeBuilder*) clearAuthInfo;

- (BOOL) hasAuthTicket;
- (AuthTicket*) authTicket;
- (RequestEnvelopeBuilder*) setAuthTicket:(AuthTicket*) value;
- (RequestEnvelopeBuilder*) setAuthTicketBuilder:(AuthTicketBuilder*) builderForValue;
- (RequestEnvelopeBuilder*) mergeAuthTicket:(AuthTicket*) value;
- (RequestEnvelopeBuilder*) clearAuthTicket;

- (BOOL) hasUnknown12;
- (SInt64) unknown12;
- (RequestEnvelopeBuilder*) setUnknown12:(SInt64) value;
- (RequestEnvelopeBuilder*) clearUnknown12;
@end

#define Request_request_type @"requestType"
#define Request_request_message @"requestMessage"
@interface Request : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasRequestMessage_:1;
  BOOL hasRequestType_:1;
  NSData* requestMessage;
  RequestType requestType;
}
- (BOOL) hasRequestType;
- (BOOL) hasRequestMessage;
@property (readonly) RequestType requestType;
@property (readonly, strong) NSData* requestMessage;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestBuilder*) builder;
+ (RequestBuilder*) builder;
+ (RequestBuilder*) builderWithPrototype:(Request*) prototype;
- (RequestBuilder*) toBuilder;

+ (Request*) parseFromData:(NSData*) data;
+ (Request*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Request*) parseFromInputStream:(NSInputStream*) input;
+ (Request*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Request*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Request*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestBuilder : PBGeneratedMessageBuilder {
@private
  Request* resultRequest;
}

- (Request*) defaultInstance;

- (RequestBuilder*) clear;
- (RequestBuilder*) clone;

- (Request*) build;
- (Request*) buildPartial;

- (RequestBuilder*) mergeFrom:(Request*) other;
- (RequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasRequestType;
- (RequestType) requestType;
- (RequestBuilder*) setRequestType:(RequestType) value;
- (RequestBuilder*) clearRequestType;

- (BOOL) hasRequestMessage;
- (NSData*) requestMessage;
- (RequestBuilder*) setRequestMessage:(NSData*) value;
- (RequestBuilder*) clearRequestMessage;
@end

#define AuthInfo_provider @"provider"
#define AuthInfo_token @"token"
@interface AuthInfo : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasProvider_:1;
  BOOL hasToken_:1;
  NSString* provider;
  JWT* token;
}
- (BOOL) hasProvider;
- (BOOL) hasToken;
@property (readonly, strong) NSString* provider;
@property (readonly, strong) JWT* token;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AuthInfoBuilder*) builder;
+ (AuthInfoBuilder*) builder;
+ (AuthInfoBuilder*) builderWithPrototype:(AuthInfo*) prototype;
- (AuthInfoBuilder*) toBuilder;

+ (AuthInfo*) parseFromData:(NSData*) data;
+ (AuthInfo*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AuthInfo*) parseFromInputStream:(NSInputStream*) input;
+ (AuthInfo*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AuthInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AuthInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AuthInfoBuilder : PBGeneratedMessageBuilder {
@private
  AuthInfo* resultAuthInfo;
}

- (AuthInfo*) defaultInstance;

- (AuthInfoBuilder*) clear;
- (AuthInfoBuilder*) clone;

- (AuthInfo*) build;
- (AuthInfo*) buildPartial;

- (AuthInfoBuilder*) mergeFrom:(AuthInfo*) other;
- (AuthInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AuthInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProvider;
- (NSString*) provider;
- (AuthInfoBuilder*) setProvider:(NSString*) value;
- (AuthInfoBuilder*) clearProvider;

- (BOOL) hasToken;
- (JWT*) token;
- (AuthInfoBuilder*) setToken:(JWT*) value;
- (AuthInfoBuilder*) setTokenBuilder:(JWTBuilder*) builderForValue;
- (AuthInfoBuilder*) mergeToken:(JWT*) value;
- (AuthInfoBuilder*) clearToken;
@end

#define JWT_contents @"contents"
#define JWT_unknown2 @"unknown2"
@interface JWT : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUnknown2_:1;
  BOOL hasContents_:1;
  SInt32 unknown2;
  NSString* contents;
}
- (BOOL) hasContents;
- (BOOL) hasUnknown2;
@property (readonly, strong) NSString* contents;
@property (readonly) SInt32 unknown2;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (JWTBuilder*) builder;
+ (JWTBuilder*) builder;
+ (JWTBuilder*) builderWithPrototype:(JWT*) prototype;
- (JWTBuilder*) toBuilder;

+ (JWT*) parseFromData:(NSData*) data;
+ (JWT*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (JWT*) parseFromInputStream:(NSInputStream*) input;
+ (JWT*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (JWT*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (JWT*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface JWTBuilder : PBGeneratedMessageBuilder {
@private
  JWT* resultJwt;
}

- (JWT*) defaultInstance;

- (JWTBuilder*) clear;
- (JWTBuilder*) clone;

- (JWT*) build;
- (JWT*) buildPartial;

- (JWTBuilder*) mergeFrom:(JWT*) other;
- (JWTBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (JWTBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasContents;
- (NSString*) contents;
- (JWTBuilder*) setContents:(NSString*) value;
- (JWTBuilder*) clearContents;

- (BOOL) hasUnknown2;
- (SInt32) unknown2;
- (JWTBuilder*) setUnknown2:(SInt32) value;
- (JWTBuilder*) clearUnknown2;
@end

#define AuthTicket_start @"start"
#define AuthTicket_expire_timestamp_ms @"expireTimestampMs"
#define AuthTicket_end @"end"
@interface AuthTicket : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasExpireTimestampMs_:1;
  BOOL hasStart_:1;
  BOOL hasEnd_:1;
  UInt64 expireTimestampMs;
  NSData* start;
  NSData* end;
}
- (BOOL) hasStart;
- (BOOL) hasExpireTimestampMs;
- (BOOL) hasEnd;
@property (readonly, strong) NSData* start;
@property (readonly) UInt64 expireTimestampMs;
@property (readonly, strong) NSData* end;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AuthTicketBuilder*) builder;
+ (AuthTicketBuilder*) builder;
+ (AuthTicketBuilder*) builderWithPrototype:(AuthTicket*) prototype;
- (AuthTicketBuilder*) toBuilder;

+ (AuthTicket*) parseFromData:(NSData*) data;
+ (AuthTicket*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AuthTicket*) parseFromInputStream:(NSInputStream*) input;
+ (AuthTicket*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AuthTicket*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AuthTicket*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AuthTicketBuilder : PBGeneratedMessageBuilder {
@private
  AuthTicket* resultAuthTicket;
}

- (AuthTicket*) defaultInstance;

- (AuthTicketBuilder*) clear;
- (AuthTicketBuilder*) clone;

- (AuthTicket*) build;
- (AuthTicket*) buildPartial;

- (AuthTicketBuilder*) mergeFrom:(AuthTicket*) other;
- (AuthTicketBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AuthTicketBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStart;
- (NSData*) start;
- (AuthTicketBuilder*) setStart:(NSData*) value;
- (AuthTicketBuilder*) clearStart;

- (BOOL) hasExpireTimestampMs;
- (UInt64) expireTimestampMs;
- (AuthTicketBuilder*) setExpireTimestampMs:(UInt64) value;
- (AuthTicketBuilder*) clearExpireTimestampMs;

- (BOOL) hasEnd;
- (NSData*) end;
- (AuthTicketBuilder*) setEnd:(NSData*) value;
- (AuthTicketBuilder*) clearEnd;
@end

#define RequestEnvelopeUnknown6_unknown1 @"unknown1"
#define RequestEnvelopeUnknown6_unknown2 @"unknown2"
@interface RequestEnvelopeUnknown6 : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUnknown1_:1;
  BOOL hasUnknown2_:1;
  SInt32 unknown1;
  RequestEnvelopeUnknown6Unknown2* unknown2;
}
- (BOOL) hasUnknown1;
- (BOOL) hasUnknown2;
@property (readonly) SInt32 unknown1;
@property (readonly, strong) RequestEnvelopeUnknown6Unknown2* unknown2;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestEnvelopeUnknown6Builder*) builder;
+ (RequestEnvelopeUnknown6Builder*) builder;
+ (RequestEnvelopeUnknown6Builder*) builderWithPrototype:(RequestEnvelopeUnknown6*) prototype;
- (RequestEnvelopeUnknown6Builder*) toBuilder;

+ (RequestEnvelopeUnknown6*) parseFromData:(NSData*) data;
+ (RequestEnvelopeUnknown6*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelopeUnknown6*) parseFromInputStream:(NSInputStream*) input;
+ (RequestEnvelopeUnknown6*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelopeUnknown6*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RequestEnvelopeUnknown6*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestEnvelopeUnknown6Builder : PBGeneratedMessageBuilder {
@private
  RequestEnvelopeUnknown6* resultRequestEnvelopeUnknown6;
}

- (RequestEnvelopeUnknown6*) defaultInstance;

- (RequestEnvelopeUnknown6Builder*) clear;
- (RequestEnvelopeUnknown6Builder*) clone;

- (RequestEnvelopeUnknown6*) build;
- (RequestEnvelopeUnknown6*) buildPartial;

- (RequestEnvelopeUnknown6Builder*) mergeFrom:(RequestEnvelopeUnknown6*) other;
- (RequestEnvelopeUnknown6Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestEnvelopeUnknown6Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUnknown1;
- (SInt32) unknown1;
- (RequestEnvelopeUnknown6Builder*) setUnknown1:(SInt32) value;
- (RequestEnvelopeUnknown6Builder*) clearUnknown1;

- (BOOL) hasUnknown2;
- (RequestEnvelopeUnknown6Unknown2*) unknown2;
- (RequestEnvelopeUnknown6Builder*) setUnknown2:(RequestEnvelopeUnknown6Unknown2*) value;
- (RequestEnvelopeUnknown6Builder*) setUnknown2Builder:(RequestEnvelopeUnknown6Unknown2Builder*) builderForValue;
- (RequestEnvelopeUnknown6Builder*) mergeUnknown2:(RequestEnvelopeUnknown6Unknown2*) value;
- (RequestEnvelopeUnknown6Builder*) clearUnknown2;
@end

#define RequestEnvelopeUnknown6Unknown2_unknown1 @"unknown1"
@interface RequestEnvelopeUnknown6Unknown2 : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUnknown1_:1;
  NSData* unknown1;
}
- (BOOL) hasUnknown1;
@property (readonly, strong) NSData* unknown1;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestEnvelopeUnknown6Unknown2Builder*) builder;
+ (RequestEnvelopeUnknown6Unknown2Builder*) builder;
+ (RequestEnvelopeUnknown6Unknown2Builder*) builderWithPrototype:(RequestEnvelopeUnknown6Unknown2*) prototype;
- (RequestEnvelopeUnknown6Unknown2Builder*) toBuilder;

+ (RequestEnvelopeUnknown6Unknown2*) parseFromData:(NSData*) data;
+ (RequestEnvelopeUnknown6Unknown2*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelopeUnknown6Unknown2*) parseFromInputStream:(NSInputStream*) input;
+ (RequestEnvelopeUnknown6Unknown2*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestEnvelopeUnknown6Unknown2*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RequestEnvelopeUnknown6Unknown2*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestEnvelopeUnknown6Unknown2Builder : PBGeneratedMessageBuilder {
@private
  RequestEnvelopeUnknown6Unknown2* resultRequestEnvelopeUnknown6Unknown2;
}

- (RequestEnvelopeUnknown6Unknown2*) defaultInstance;

- (RequestEnvelopeUnknown6Unknown2Builder*) clear;
- (RequestEnvelopeUnknown6Unknown2Builder*) clone;

- (RequestEnvelopeUnknown6Unknown2*) build;
- (RequestEnvelopeUnknown6Unknown2*) buildPartial;

- (RequestEnvelopeUnknown6Unknown2Builder*) mergeFrom:(RequestEnvelopeUnknown6Unknown2*) other;
- (RequestEnvelopeUnknown6Unknown2Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestEnvelopeUnknown6Unknown2Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUnknown1;
- (NSData*) unknown1;
- (RequestEnvelopeUnknown6Unknown2Builder*) setUnknown1:(NSData*) value;
- (RequestEnvelopeUnknown6Unknown2Builder*) clearUnknown1;
@end

#define GetMapObjectsMessage_cell_id @"cellId"
#define GetMapObjectsMessage_since_timestamp_ms @"sinceTimestampMs"
#define GetMapObjectsMessage_latitude @"latitude"
#define GetMapObjectsMessage_longitude @"longitude"
@interface GetMapObjectsMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLatitude_:1;
  BOOL hasLongitude_:1;
  Float64 latitude;
  Float64 longitude;
  PBAppendableArray * sinceTimestampMsArray;
  SInt32 sinceTimestampMsMemoizedSerializedSize;
  PBAppendableArray * cellIdArray;
  SInt32 cellIdMemoizedSerializedSize;
}
- (BOOL) hasLatitude;
- (BOOL) hasLongitude;
@property (readonly, strong) PBArray * cellId;
@property (readonly, strong) PBArray * sinceTimestampMs;
@property (readonly) Float64 latitude;
@property (readonly) Float64 longitude;
- (UInt64)cellIdAtIndex:(NSUInteger)index;
- (SInt64)sinceTimestampMsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (GetMapObjectsMessageBuilder*) builder;
+ (GetMapObjectsMessageBuilder*) builder;
+ (GetMapObjectsMessageBuilder*) builderWithPrototype:(GetMapObjectsMessage*) prototype;
- (GetMapObjectsMessageBuilder*) toBuilder;

+ (GetMapObjectsMessage*) parseFromData:(NSData*) data;
+ (GetMapObjectsMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GetMapObjectsMessage*) parseFromInputStream:(NSInputStream*) input;
+ (GetMapObjectsMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GetMapObjectsMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (GetMapObjectsMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface GetMapObjectsMessageBuilder : PBGeneratedMessageBuilder {
@private
  GetMapObjectsMessage* resultGetMapObjectsMessage;
}

- (GetMapObjectsMessage*) defaultInstance;

- (GetMapObjectsMessageBuilder*) clear;
- (GetMapObjectsMessageBuilder*) clone;

- (GetMapObjectsMessage*) build;
- (GetMapObjectsMessage*) buildPartial;

- (GetMapObjectsMessageBuilder*) mergeFrom:(GetMapObjectsMessage*) other;
- (GetMapObjectsMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (GetMapObjectsMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (PBAppendableArray *)cellId;
- (UInt64)cellIdAtIndex:(NSUInteger)index;
- (GetMapObjectsMessageBuilder *)addCellId:(UInt64)value;
- (GetMapObjectsMessageBuilder *)setCellIdArray:(NSArray *)array;
- (GetMapObjectsMessageBuilder *)setCellIdValues:(const UInt64 *)values count:(NSUInteger)count;
- (GetMapObjectsMessageBuilder *)clearCellId;

- (PBAppendableArray *)sinceTimestampMs;
- (SInt64)sinceTimestampMsAtIndex:(NSUInteger)index;
- (GetMapObjectsMessageBuilder *)addSinceTimestampMs:(SInt64)value;
- (GetMapObjectsMessageBuilder *)setSinceTimestampMsArray:(NSArray *)array;
- (GetMapObjectsMessageBuilder *)setSinceTimestampMsValues:(const SInt64 *)values count:(NSUInteger)count;
- (GetMapObjectsMessageBuilder *)clearSinceTimestampMs;

- (BOOL) hasLatitude;
- (Float64) latitude;
- (GetMapObjectsMessageBuilder*) setLatitude:(Float64) value;
- (GetMapObjectsMessageBuilder*) clearLatitude;

- (BOOL) hasLongitude;
- (Float64) longitude;
- (GetMapObjectsMessageBuilder*) setLongitude:(Float64) value;
- (GetMapObjectsMessageBuilder*) clearLongitude;
@end


// @@protoc_insertion_point(global_scope)
