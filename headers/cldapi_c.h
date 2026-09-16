// Flat C exports observed in cldapi.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef CLDAPI_C_H
#define CLDAPI_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CfAbortOperation (ABI unverified)
// Export: CfGetLastSyncStatus (ABI unverified)
// Export: CfOpenProgressEvent (ABI unverified)
// Export: CfQueryProgress (ABI unverified)
// Export: CfReportProviderProgress (ABI unverified)
// Export: CfReportProviderProgress2 (ABI unverified)
// Export: CfCloseAppPolicy (ABI unverified)
// Export: CfEnumAppPolicy (ABI unverified)
// Export: CfOpenAppPolicy (ABI unverified)
// Export: CfSetAppPolicy (ABI unverified)
// Export: CfCloseHandle (ABI unverified)
// Export: CfGetWin32HandleFromProtectedHandle (ABI unverified)
// Export: CfOpenFileWithOplock (ABI unverified)
// Export: CfReferenceProtectedHandle (ABI unverified)
// Export: CfReleaseProtectedHandle (ABI unverified)
// Export: CfReleaseTransferKey (ABI unverified)
// Export: CfConnectSyncRoot (ABI unverified)
// Export: CfDisconnectSyncRoot (ABI unverified)
// Export: CfExecute (ABI unverified)
// Export: CfQuerySyncProviderStatus (ABI unverified)
// Export: CfRegisterSyncRoot (ABI unverified)
// Export: CfReportSyncStatus (ABI unverified)
// Export: CfUnregisterSyncRoot (ABI unverified)
// Export: CfUpdateSyncProviderStatus (ABI unverified)
// Export: CfConvertToPlaceholder (ABI unverified)
// Export: CfCreatePlaceholders (ABI unverified)
// Export: CfDehydratePlaceholder (ABI unverified)
// Export: CfDehydratePlaceholderEx (ABI unverified)
// Export: CfGetCorrelationVector (ABI unverified)
// Export: CfGetTransferKey (ABI unverified)
// Export: CfHydratePlaceholder (ABI unverified)
// Export: CfHydratePlaceholderWithAttributionPrivate (ABI unverified)
// Export: CfRevertPlaceholder (ABI unverified)
// Export: CfSetCorrelationVector (ABI unverified)
// Export: CfSetInSyncState (ABI unverified)
// Export: CfSetPinState (ABI unverified)
// Export: CfUpdatePlaceholder (ABI unverified)
// Export: CfGetPlaceholderInfo (ABI unverified)
// Export: CfGetPlaceholderRangeInfo (ABI unverified)
// Export: CfGetPlaceholderRangeInfoForHydration (ABI unverified)
// Export: CfGetPlatformInfo (ABI unverified)
// Export: CfGetSyncRootInfoByHandle (ABI unverified)
// Export: CfGetSyncRootInfoByPath (ABI unverified)
// Export: CfLockProperties (ABI unverified)
// Export: CfRetrieveProperties (ABI unverified)
// Export: CfStoreProperties (ABI unverified)
// Export: CfUnlockProperties (ABI unverified)
// Export: CfTestToggleSyncMsgThreadWaitEvent (ABI unverified)
// Export: CfGetPlaceholderStateFromAttributeTag (ABI unverified)
// Export: CfGetPlaceholderStateFromFileInfo (ABI unverified)
// Export: CfGetPlaceholderStateFromFindData (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // CLDAPI_C_H
