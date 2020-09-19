

#pragma once

#ifndef GO_MOC_f074ca_H
#define GO_MOC_f074ca_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridgef074ca;
void QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
void QmlBridgef074ca_ConnectDisplayTotalBalance(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayTotalBalance(void* ptr);
void QmlBridgef074ca_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD);
void QmlBridgef074ca_ConnectDisplayAvailableBalance(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayAvailableBalance(void* ptr);
void QmlBridgef074ca_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data);
void QmlBridgef074ca_ConnectDisplayLockedBalance(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayLockedBalance(void* ptr);
void QmlBridgef074ca_DisplayLockedBalance(void* ptr, struct Moc_PackedString data);
void QmlBridgef074ca_ConnectDisplayAddress(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayAddress(void* ptr);
void QmlBridgef074ca_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion);
void QmlBridgef074ca_ConnectAddTransactionToList(void* ptr, long long t);
void QmlBridgef074ca_DisconnectAddTransactionToList(void* ptr);
void QmlBridgef074ca_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number);
void QmlBridgef074ca_ConnectAddRemoteNodeToList(void* ptr, long long t);
void QmlBridgef074ca_DisconnectAddRemoteNodeToList(void* ptr);
void QmlBridgef074ca_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName);
void QmlBridgef074ca_ConnectChangeTextRemoteNode(void* ptr, long long t);
void QmlBridgef074ca_DisconnectChangeTextRemoteNode(void* ptr);
void QmlBridgef074ca_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText);
void QmlBridgef074ca_ConnectSetSelectedRemoteNode(void* ptr, long long t);
void QmlBridgef074ca_DisconnectSetSelectedRemoteNode(void* ptr);
void QmlBridgef074ca_SetSelectedRemoteNode(void* ptr, int index);
void QmlBridgef074ca_ConnectDisplayPopup(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayPopup(void* ptr);
void QmlBridgef074ca_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti);
void QmlBridgef074ca_ConnectDisplaySyncingInfo(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplaySyncingInfo(void* ptr);
void QmlBridgef074ca_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo);
void QmlBridgef074ca_ConnectDisplayErrorDialog(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayErrorDialog(void* ptr);
void QmlBridgef074ca_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText);
void QmlBridgef074ca_ConnectDisplayInfoDialog(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayInfoDialog(void* ptr);
void QmlBridgef074ca_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText);
void QmlBridgef074ca_ConnectClearTransferAmount(void* ptr, long long t);
void QmlBridgef074ca_DisconnectClearTransferAmount(void* ptr);
void QmlBridgef074ca_ClearTransferAmount(void* ptr);
void QmlBridgef074ca_ConnectAskForFusion(void* ptr, long long t);
void QmlBridgef074ca_DisconnectAskForFusion(void* ptr);
void QmlBridgef074ca_AskForFusion(void* ptr);
void QmlBridgef074ca_ConnectClearListTransactions(void* ptr, long long t);
void QmlBridgef074ca_DisconnectClearListTransactions(void* ptr);
void QmlBridgef074ca_ClearListTransactions(void* ptr);
void QmlBridgef074ca_ConnectDisplayPrivateKeys(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayPrivateKeys(void* ptr);
void QmlBridgef074ca_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress);
void QmlBridgef074ca_ConnectDisplaySeed(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplaySeed(void* ptr);
void QmlBridgef074ca_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress);
void QmlBridgef074ca_ConnectDisplayOpenWalletScreen(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayOpenWalletScreen(void* ptr);
void QmlBridgef074ca_DisplayOpenWalletScreen(void* ptr);
void QmlBridgef074ca_ConnectDisplayMainWalletScreen(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayMainWalletScreen(void* ptr);
void QmlBridgef074ca_DisplayMainWalletScreen(void* ptr);
void QmlBridgef074ca_ConnectFinishedLoadingWalletd(void* ptr, long long t);
void QmlBridgef074ca_DisconnectFinishedLoadingWalletd(void* ptr);
void QmlBridgef074ca_FinishedLoadingWalletd(void* ptr);
void QmlBridgef074ca_ConnectFinishedCreatingWallet(void* ptr, long long t);
void QmlBridgef074ca_DisconnectFinishedCreatingWallet(void* ptr);
void QmlBridgef074ca_FinishedCreatingWallet(void* ptr);
void QmlBridgef074ca_ConnectFinishedSendingTransaction(void* ptr, long long t);
void QmlBridgef074ca_DisconnectFinishedSendingTransaction(void* ptr);
void QmlBridgef074ca_FinishedSendingTransaction(void* ptr);
void QmlBridgef074ca_ConnectDisplayPathToPreviousWallet(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayPathToPreviousWallet(void* ptr);
void QmlBridgef074ca_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet);
void QmlBridgef074ca_ConnectDisplayWalletCreationLocation(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayWalletCreationLocation(void* ptr);
void QmlBridgef074ca_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation);
void QmlBridgef074ca_ConnectDisplayUseRemoteNode(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayUseRemoteNode(void* ptr);
void QmlBridgef074ca_DisplayUseRemoteNode(void* ptr, char useRemote);
void QmlBridgef074ca_ConnectHideSettingsScreen(void* ptr, long long t);
void QmlBridgef074ca_DisconnectHideSettingsScreen(void* ptr);
void QmlBridgef074ca_HideSettingsScreen(void* ptr);
void QmlBridgef074ca_ConnectDisplaySettingsScreen(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplaySettingsScreen(void* ptr);
void QmlBridgef074ca_DisplaySettingsScreen(void* ptr);
void QmlBridgef074ca_ConnectDisplaySettingsValues(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplaySettingsValues(void* ptr);
void QmlBridgef074ca_DisplaySettingsValues(void* ptr, char displayFiat);
void QmlBridgef074ca_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr);
void QmlBridgef074ca_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort);
void QmlBridgef074ca_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayFullBalanceInTransferAmount(void* ptr);
void QmlBridgef074ca_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance);
void QmlBridgef074ca_ConnectDisplayDefaultFee(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayDefaultFee(void* ptr);
void QmlBridgef074ca_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee);
void QmlBridgef074ca_ConnectDisplayNodeFee(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayNodeFee(void* ptr);
void QmlBridgef074ca_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee);
void QmlBridgef074ca_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t);
void QmlBridgef074ca_DisconnectUpdateConfirmationsOfTransaction(void* ptr);
void QmlBridgef074ca_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations);
void QmlBridgef074ca_ConnectDisplayInfoScreen(void* ptr, long long t);
void QmlBridgef074ca_DisconnectDisplayInfoScreen(void* ptr);
void QmlBridgef074ca_DisplayInfoScreen(void* ptr);
void QmlBridgef074ca_ConnectAddSavedAddressToList(void* ptr, long long t);
void QmlBridgef074ca_DisconnectAddSavedAddressToList(void* ptr);
void QmlBridgef074ca_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridgef074ca_Log(void* ptr, struct Moc_PackedString msg);
void QmlBridgef074ca_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID);
void QmlBridgef074ca_GoToWebsite(void* ptr, struct Moc_PackedString url);
void QmlBridgef074ca_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID);
void QmlBridgef074ca_ClickedButtonCopyAddress(void* ptr);
void QmlBridgef074ca_ClickedButtonCopyKeys(void* ptr);
void QmlBridgef074ca_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy);
void QmlBridgef074ca_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee);
void QmlBridgef074ca_ClickedButtonBackupWallet(void* ptr);
void QmlBridgef074ca_ClickedCloseWallet(void* ptr);
void QmlBridgef074ca_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet);
void QmlBridgef074ca_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet);
void QmlBridgef074ca_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight);
void QmlBridgef074ca_ChoseRemote(void* ptr, char remote);
void QmlBridgef074ca_SelectedRemoteNode(void* ptr, int index);
struct Moc_PackedString QmlBridgef074ca_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL);
void QmlBridgef074ca_ClickedCloseSettings(void* ptr);
void QmlBridgef074ca_ClickedSettingsButton(void* ptr);
void QmlBridgef074ca_ChoseDisplayFiat(void* ptr, char displayFiat);
void QmlBridgef074ca_ChoseCheckpoints(void* ptr, char checkpoints);
void QmlBridgef074ca_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort);
void QmlBridgef074ca_ResetRemoteDaemonInfo(void* ptr);
void QmlBridgef074ca_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee);
void QmlBridgef074ca_GetDefaultFeeAndDisplay(void* ptr);
void QmlBridgef074ca_LimitDisplayTransactions(void* ptr, char limit);
struct Moc_PackedString QmlBridgef074ca_GetVersion(void* ptr);
struct Moc_PackedString QmlBridgef074ca_GetNewVersion(void* ptr);
struct Moc_PackedString QmlBridgef074ca_GetNewVersionURL(void* ptr);
void QmlBridgef074ca_OptimizeWalletWithFusion(void* ptr);
void QmlBridgef074ca_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridgef074ca_FillListSavedAddresses(void* ptr);
void QmlBridgef074ca_DeleteSavedAddress(void* ptr, int dbID);
void QmlBridgef074ca_ExportListTransactions(void* ptr);
void QmlBridgef074ca_RegisterToGo(void* ptr, void* object);
void QmlBridgef074ca_DeregisterToGo(void* ptr, struct Moc_PackedString objectName);
int QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaType();
int QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaType2(char* typeName);
int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterType();
int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterUncreatableType(char* uri, int versionMajor, int versionMinor, char* qmlName, struct Moc_PackedString message);
void* QmlBridgef074ca___children_atList(void* ptr, int i);
void QmlBridgef074ca___children_setList(void* ptr, void* i);
void* QmlBridgef074ca___children_newList(void* ptr);
void* QmlBridgef074ca___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridgef074ca___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridgef074ca___dynamicPropertyNames_newList(void* ptr);
void* QmlBridgef074ca___findChildren_atList(void* ptr, int i);
void QmlBridgef074ca___findChildren_setList(void* ptr, void* i);
void* QmlBridgef074ca___findChildren_newList(void* ptr);
void* QmlBridgef074ca___findChildren_atList3(void* ptr, int i);
void QmlBridgef074ca___findChildren_setList3(void* ptr, void* i);
void* QmlBridgef074ca___findChildren_newList3(void* ptr);
void* QmlBridgef074ca_NewQmlBridge(void* parent);
void QmlBridgef074ca_DestroyQmlBridge(void* ptr);
void QmlBridgef074ca_DestroyQmlBridgeDefault(void* ptr);
void QmlBridgef074ca_ChildEventDefault(void* ptr, void* event);
void QmlBridgef074ca_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridgef074ca_CustomEventDefault(void* ptr, void* event);
void QmlBridgef074ca_DeleteLaterDefault(void* ptr);
void QmlBridgef074ca_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridgef074ca_EventDefault(void* ptr, void* e);
char QmlBridgef074ca_EventFilterDefault(void* ptr, void* watched, void* event);
;
void QmlBridgef074ca_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif