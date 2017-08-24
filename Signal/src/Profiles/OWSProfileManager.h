//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import <SignalServiceKit/ProfileManagerProtocol.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kNSNotificationName_LocalProfileDidChange;
extern NSString *const kNSNotificationName_OtherUsersProfileDidChange;
extern NSString *const kNSNotificationName_ProfileWhitelistDidChange;
extern NSString *const kNSNotificationKey_ProfileRecipientId;
extern NSString *const kNSNotificationKey_ProfileGroupId;

extern const NSUInteger kOWSProfileManager_MaxAvatarDiameter;

@class TSThread;
@class OWSAES256Key;

// This class can be safely accessed and used from any thread.
@interface OWSProfileManager : NSObject <ProfileManagerProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)sharedManager;

- (void)resetProfileStorage;

#pragma mark - Local Profile

// These two methods should only be called from the main thread.
- (OWSAES256Key *)localProfileKey;
- (BOOL)hasLocalProfile;
- (nullable NSString *)localProfileName;
- (nullable UIImage *)localProfileAvatarImage;

// This method is used to update the "local profile" state on the client
// and the service.  Client state is only updated if service state is
// successfully updated.
//
// This method should only be called from the main thread.
- (void)updateLocalProfileName:(nullable NSString *)profileName
                   avatarImage:(nullable UIImage *)avatarImage
                       success:(void (^)())successBlock
                       failure:(void (^)())failureBlock;

- (BOOL)isProfileNameTooLong:(nullable NSString *)profileName;

#pragma mark - Profile Whitelist

#ifdef DEBUG
// These methods are for debugging.
- (void)clearProfileWhitelist;
- (void)logProfileWhitelist;
- (void)regenerateLocalProfile;
#endif

- (void)addThreadToProfileWhitelist:(TSThread *)thread;

- (BOOL)isThreadInProfileWhitelist:(TSThread *)thread;

- (BOOL)isUserInProfileWhitelist:(NSString *)recipientId;

- (void)setContactRecipientIds:(NSArray<NSString *> *)contactRecipientIds;

#pragma mark - Other User's Profiles

- (nullable OWSAES256Key *)profileKeyForRecipientId:(NSString *)recipientId;

- (nullable NSString *)profileNameForRecipientId:(NSString *)recipientId;

- (nullable UIImage *)profileAvatarForRecipientId:(NSString *)recipientId;

- (void)refreshProfileForRecipientId:(NSString *)recipientId;

- (void)updateProfileForRecipientId:(NSString *)recipientId
               profileNameEncrypted:(nullable NSData *)profileNameEncrypted
                      avatarUrlPath:(nullable NSString *)avatarUrlPath;

@end

NS_ASSUME_NONNULL_END
