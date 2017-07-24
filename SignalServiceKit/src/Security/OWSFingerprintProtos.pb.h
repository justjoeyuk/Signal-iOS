// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class OWSFingerprintProtosLogicalFingerprint;
@class OWSFingerprintProtosLogicalFingerprintBuilder;
@class OWSFingerprintProtosLogicalFingerprints;
@class OWSFingerprintProtosLogicalFingerprintsBuilder;
@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class PBDescriptorProto;
@class PBDescriptorProtoBuilder;
@class PBDescriptorProtoExtensionRange;
@class PBDescriptorProtoExtensionRangeBuilder;
@class PBEnumDescriptorProto;
@class PBEnumDescriptorProtoBuilder;
@class PBEnumOptions;
@class PBEnumOptionsBuilder;
@class PBEnumValueDescriptorProto;
@class PBEnumValueDescriptorProtoBuilder;
@class PBEnumValueOptions;
@class PBEnumValueOptionsBuilder;
@class PBFieldDescriptorProto;
@class PBFieldDescriptorProtoBuilder;
@class PBFieldOptions;
@class PBFieldOptionsBuilder;
@class PBFileDescriptorProto;
@class PBFileDescriptorProtoBuilder;
@class PBFileDescriptorSet;
@class PBFileDescriptorSetBuilder;
@class PBFileOptions;
@class PBFileOptionsBuilder;
@class PBMessageOptions;
@class PBMessageOptionsBuilder;
@class PBMethodDescriptorProto;
@class PBMethodDescriptorProtoBuilder;
@class PBMethodOptions;
@class PBMethodOptionsBuilder;
@class PBOneofDescriptorProto;
@class PBOneofDescriptorProtoBuilder;
@class PBServiceDescriptorProto;
@class PBServiceDescriptorProtoBuilder;
@class PBServiceOptions;
@class PBServiceOptionsBuilder;
@class PBSourceCodeInfo;
@class PBSourceCodeInfoBuilder;
@class PBSourceCodeInfoLocation;
@class PBSourceCodeInfoLocationBuilder;
@class PBUninterpretedOption;
@class PBUninterpretedOptionBuilder;
@class PBUninterpretedOptionNamePart;
@class PBUninterpretedOptionNamePartBuilder;



@interface OWSFingerprintProtosOwsfingerprintProtosRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define LogicalFingerprint_identityData @"identityData"
@interface OWSFingerprintProtosLogicalFingerprint : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasIdentityData_:1;
  NSData* identityData;
}
- (BOOL) hasIdentityData;
@property (readonly, strong) NSData* identityData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) builder;
+ (OWSFingerprintProtosLogicalFingerprintBuilder*) builder;
+ (OWSFingerprintProtosLogicalFingerprintBuilder*) builderWithPrototype:(OWSFingerprintProtosLogicalFingerprint*) prototype;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) toBuilder;

+ (OWSFingerprintProtosLogicalFingerprint*) parseFromData:(NSData*) data;
+ (OWSFingerprintProtosLogicalFingerprint*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSFingerprintProtosLogicalFingerprint*) parseFromInputStream:(NSInputStream*) input;
+ (OWSFingerprintProtosLogicalFingerprint*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSFingerprintProtosLogicalFingerprint*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSFingerprintProtosLogicalFingerprint*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSFingerprintProtosLogicalFingerprintBuilder : PBGeneratedMessageBuilder {
@private
  OWSFingerprintProtosLogicalFingerprint* resultLogicalFingerprint;
}

- (OWSFingerprintProtosLogicalFingerprint*) defaultInstance;

- (OWSFingerprintProtosLogicalFingerprintBuilder*) clear;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) clone;

- (OWSFingerprintProtosLogicalFingerprint*) build;
- (OWSFingerprintProtosLogicalFingerprint*) buildPartial;

- (OWSFingerprintProtosLogicalFingerprintBuilder*) mergeFrom:(OWSFingerprintProtosLogicalFingerprint*) other;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasIdentityData;
- (NSData*) identityData;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) setIdentityData:(NSData*) value;
- (OWSFingerprintProtosLogicalFingerprintBuilder*) clearIdentityData;
@end

#define LogicalFingerprints_version @"version"
#define LogicalFingerprints_localFingerprint @"localFingerprint"
#define LogicalFingerprints_remoteFingerprint @"remoteFingerprint"
@interface OWSFingerprintProtosLogicalFingerprints : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLocalFingerprint_:1;
  BOOL hasRemoteFingerprint_:1;
  BOOL hasVersion_:1;
  OWSFingerprintProtosLogicalFingerprint* localFingerprint;
  OWSFingerprintProtosLogicalFingerprint* remoteFingerprint;
  UInt32 version;
}
- (BOOL) hasVersion;
- (BOOL) hasLocalFingerprint;
- (BOOL) hasRemoteFingerprint;
@property (readonly) UInt32 version;
@property (readonly, strong) OWSFingerprintProtosLogicalFingerprint* localFingerprint;
@property (readonly, strong) OWSFingerprintProtosLogicalFingerprint* remoteFingerprint;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) builder;
+ (OWSFingerprintProtosLogicalFingerprintsBuilder*) builder;
+ (OWSFingerprintProtosLogicalFingerprintsBuilder*) builderWithPrototype:(OWSFingerprintProtosLogicalFingerprints*) prototype;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) toBuilder;

+ (OWSFingerprintProtosLogicalFingerprints*) parseFromData:(NSData*) data;
+ (OWSFingerprintProtosLogicalFingerprints*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSFingerprintProtosLogicalFingerprints*) parseFromInputStream:(NSInputStream*) input;
+ (OWSFingerprintProtosLogicalFingerprints*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSFingerprintProtosLogicalFingerprints*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSFingerprintProtosLogicalFingerprints*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSFingerprintProtosLogicalFingerprintsBuilder : PBGeneratedMessageBuilder {
@private
  OWSFingerprintProtosLogicalFingerprints* resultLogicalFingerprints;
}

- (OWSFingerprintProtosLogicalFingerprints*) defaultInstance;

- (OWSFingerprintProtosLogicalFingerprintsBuilder*) clear;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) clone;

- (OWSFingerprintProtosLogicalFingerprints*) build;
- (OWSFingerprintProtosLogicalFingerprints*) buildPartial;

- (OWSFingerprintProtosLogicalFingerprintsBuilder*) mergeFrom:(OWSFingerprintProtosLogicalFingerprints*) other;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasVersion;
- (UInt32) version;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) setVersion:(UInt32) value;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) clearVersion;

- (BOOL) hasLocalFingerprint;
- (OWSFingerprintProtosLogicalFingerprint*) localFingerprint;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) setLocalFingerprint:(OWSFingerprintProtosLogicalFingerprint*) value;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) setLocalFingerprintBuilder:(OWSFingerprintProtosLogicalFingerprintBuilder*) builderForValue;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) mergeLocalFingerprint:(OWSFingerprintProtosLogicalFingerprint*) value;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) clearLocalFingerprint;

- (BOOL) hasRemoteFingerprint;
- (OWSFingerprintProtosLogicalFingerprint*) remoteFingerprint;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) setRemoteFingerprint:(OWSFingerprintProtosLogicalFingerprint*) value;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) setRemoteFingerprintBuilder:(OWSFingerprintProtosLogicalFingerprintBuilder*) builderForValue;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) mergeRemoteFingerprint:(OWSFingerprintProtosLogicalFingerprint*) value;
- (OWSFingerprintProtosLogicalFingerprintsBuilder*) clearRemoteFingerprint;
@end


// @@protoc_insertion_point(global_scope)