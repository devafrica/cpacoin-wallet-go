

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QString>
#include <QTimerEvent>
#include <QWindow>

#ifdef QT_QML_LIB
	#include <QQmlEngine>
#endif


class QmlBridgef074ca: public QObject
{
Q_OBJECT
public:
	QmlBridgef074ca(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaType();QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaTypes();callbackQmlBridgef074ca_Constructor(this);};
	void Signal_DisplayTotalBalance(QString balance, QString balanceUSD) { QByteArray* t8dfa30 = new QByteArray(balance.toUtf8()); Moc_PackedString balancePacked = { const_cast<char*>(t8dfa30->prepend("WHITESPACE").constData()+10), t8dfa30->size()-10, t8dfa30 };QByteArray* t7a7b4e = new QByteArray(balanceUSD.toUtf8()); Moc_PackedString balanceUSDPacked = { const_cast<char*>(t7a7b4e->prepend("WHITESPACE").constData()+10), t7a7b4e->size()-10, t7a7b4e };callbackQmlBridgef074ca_DisplayTotalBalance(this, balancePacked, balanceUSDPacked); };
	void Signal_DisplayAvailableBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridgef074ca_DisplayAvailableBalance(this, dataPacked); };
	void Signal_DisplayLockedBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridgef074ca_DisplayLockedBalance(this, dataPacked); };
	void Signal_DisplayAddress(QString address, QString wallet, bool displayFiatConversion) { QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc307b6 = new QByteArray(wallet.toUtf8()); Moc_PackedString walletPacked = { const_cast<char*>(tc307b6->prepend("WHITESPACE").constData()+10), tc307b6->size()-10, tc307b6 };callbackQmlBridgef074ca_DisplayAddress(this, addressPacked, walletPacked, displayFiatConversion); };
	void Signal_AddTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number) { QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };QByteArray* t9cb6ff = new QByteArray(amount.toUtf8()); Moc_PackedString amountPacked = { const_cast<char*>(t9cb6ff->prepend("WHITESPACE").constData()+10), t9cb6ff->size()-10, t9cb6ff };QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };QByteArray* t714eea = new QByteArray(ti.toUtf8()); Moc_PackedString tiPacked = { const_cast<char*>(t714eea->prepend("WHITESPACE").constData()+10), t714eea->size()-10, t714eea };QByteArray* t53b0a1 = new QByteArray(number.toUtf8()); Moc_PackedString numberPacked = { const_cast<char*>(t53b0a1->prepend("WHITESPACE").constData()+10), t53b0a1->size()-10, t53b0a1 };callbackQmlBridgef074ca_AddTransactionToList(this, paymentIDPacked, transactionIDPacked, amountPacked, confirmationsPacked, tiPacked, numberPacked); };
	void Signal_AddRemoteNodeToList(QString nodeName) { QByteArray* tc1a2e1 = new QByteArray(nodeName.toUtf8()); Moc_PackedString nodeNamePacked = { const_cast<char*>(tc1a2e1->prepend("WHITESPACE").constData()+10), tc1a2e1->size()-10, tc1a2e1 };callbackQmlBridgef074ca_AddRemoteNodeToList(this, nodeNamePacked); };
	void Signal_ChangeTextRemoteNode(qint32 index, QString newText) { QByteArray* t7bacb7 = new QByteArray(newText.toUtf8()); Moc_PackedString newTextPacked = { const_cast<char*>(t7bacb7->prepend("WHITESPACE").constData()+10), t7bacb7->size()-10, t7bacb7 };callbackQmlBridgef074ca_ChangeTextRemoteNode(this, index, newTextPacked); };
	void Signal_SetSelectedRemoteNode(qint32 index) { callbackQmlBridgef074ca_SetSelectedRemoteNode(this, index); };
	void Signal_DisplayPopup(QString text, qint32 ti) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackQmlBridgef074ca_DisplayPopup(this, textPacked, ti); };
	void Signal_DisplaySyncingInfo(QString syncing, QString syncingInfo) { QByteArray* t72df87 = new QByteArray(syncing.toUtf8()); Moc_PackedString syncingPacked = { const_cast<char*>(t72df87->prepend("WHITESPACE").constData()+10), t72df87->size()-10, t72df87 };QByteArray* t834023 = new QByteArray(syncingInfo.toUtf8()); Moc_PackedString syncingInfoPacked = { const_cast<char*>(t834023->prepend("WHITESPACE").constData()+10), t834023->size()-10, t834023 };callbackQmlBridgef074ca_DisplaySyncingInfo(this, syncingPacked, syncingInfoPacked); };
	void Signal_DisplayErrorDialog(QString errorText, QString errorInformativeText) { QByteArray* t5f7b8e = new QByteArray(errorText.toUtf8()); Moc_PackedString errorTextPacked = { const_cast<char*>(t5f7b8e->prepend("WHITESPACE").constData()+10), t5f7b8e->size()-10, t5f7b8e };QByteArray* tae90fd = new QByteArray(errorInformativeText.toUtf8()); Moc_PackedString errorInformativeTextPacked = { const_cast<char*>(tae90fd->prepend("WHITESPACE").constData()+10), tae90fd->size()-10, tae90fd };callbackQmlBridgef074ca_DisplayErrorDialog(this, errorTextPacked, errorInformativeTextPacked); };
	void Signal_DisplayInfoDialog(QString title, QString mainText, QString informativeText) { QByteArray* t3c6de1 = new QByteArray(title.toUtf8()); Moc_PackedString titlePacked = { const_cast<char*>(t3c6de1->prepend("WHITESPACE").constData()+10), t3c6de1->size()-10, t3c6de1 };QByteArray* ta3233c = new QByteArray(mainText.toUtf8()); Moc_PackedString mainTextPacked = { const_cast<char*>(ta3233c->prepend("WHITESPACE").constData()+10), ta3233c->size()-10, ta3233c };QByteArray* t69f3f8 = new QByteArray(informativeText.toUtf8()); Moc_PackedString informativeTextPacked = { const_cast<char*>(t69f3f8->prepend("WHITESPACE").constData()+10), t69f3f8->size()-10, t69f3f8 };callbackQmlBridgef074ca_DisplayInfoDialog(this, titlePacked, mainTextPacked, informativeTextPacked); };
	void Signal_ClearTransferAmount() { callbackQmlBridgef074ca_ClearTransferAmount(this); };
	void Signal_AskForFusion() { callbackQmlBridgef074ca_AskForFusion(this); };
	void Signal_ClearListTransactions() { callbackQmlBridgef074ca_ClearListTransactions(this); };
	void Signal_DisplayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridgef074ca_DisplayPrivateKeys(this, filenamePacked, privateViewKeyPacked, privateSpendKeyPacked, walletAddressPacked); };
	void Signal_DisplaySeed(QString filename, QString mnemonicSeed, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridgef074ca_DisplaySeed(this, filenamePacked, mnemonicSeedPacked, walletAddressPacked); };
	void Signal_DisplayOpenWalletScreen() { callbackQmlBridgef074ca_DisplayOpenWalletScreen(this); };
	void Signal_DisplayMainWalletScreen() { callbackQmlBridgef074ca_DisplayMainWalletScreen(this); };
	void Signal_FinishedLoadingWalletd() { callbackQmlBridgef074ca_FinishedLoadingWalletd(this); };
	void Signal_FinishedCreatingWallet() { callbackQmlBridgef074ca_FinishedCreatingWallet(this); };
	void Signal_FinishedSendingTransaction() { callbackQmlBridgef074ca_FinishedSendingTransaction(this); };
	void Signal_DisplayPathToPreviousWallet(QString pathToPreviousWallet) { QByteArray* t70f286 = new QByteArray(pathToPreviousWallet.toUtf8()); Moc_PackedString pathToPreviousWalletPacked = { const_cast<char*>(t70f286->prepend("WHITESPACE").constData()+10), t70f286->size()-10, t70f286 };callbackQmlBridgef074ca_DisplayPathToPreviousWallet(this, pathToPreviousWalletPacked); };
	void Signal_DisplayWalletCreationLocation(QString walletLocation) { QByteArray* tabe26e = new QByteArray(walletLocation.toUtf8()); Moc_PackedString walletLocationPacked = { const_cast<char*>(tabe26e->prepend("WHITESPACE").constData()+10), tabe26e->size()-10, tabe26e };callbackQmlBridgef074ca_DisplayWalletCreationLocation(this, walletLocationPacked); };
	void Signal_DisplayUseRemoteNode(bool useRemote) { callbackQmlBridgef074ca_DisplayUseRemoteNode(this, useRemote); };
	void Signal_HideSettingsScreen() { callbackQmlBridgef074ca_HideSettingsScreen(this); };
	void Signal_DisplaySettingsScreen() { callbackQmlBridgef074ca_DisplaySettingsScreen(this); };
	void Signal_DisplaySettingsValues(bool displayFiat) { callbackQmlBridgef074ca_DisplaySettingsValues(this, displayFiat); };
	void Signal_DisplaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort) { QByteArray* tc6f2b4 = new QByteArray(remoteNodeAddress.toUtf8()); Moc_PackedString remoteNodeAddressPacked = { const_cast<char*>(tc6f2b4->prepend("WHITESPACE").constData()+10), tc6f2b4->size()-10, tc6f2b4 };QByteArray* t1b1377 = new QByteArray(remoteNodePort.toUtf8()); Moc_PackedString remoteNodePortPacked = { const_cast<char*>(t1b1377->prepend("WHITESPACE").constData()+10), t1b1377->size()-10, t1b1377 };callbackQmlBridgef074ca_DisplaySettingsRemoteDaemonInfo(this, remoteNodeAddressPacked, remoteNodePortPacked); };
	void Signal_DisplayFullBalanceInTransferAmount(QString fullBalance) { QByteArray* tccc49e = new QByteArray(fullBalance.toUtf8()); Moc_PackedString fullBalancePacked = { const_cast<char*>(tccc49e->prepend("WHITESPACE").constData()+10), tccc49e->size()-10, tccc49e };callbackQmlBridgef074ca_DisplayFullBalanceInTransferAmount(this, fullBalancePacked); };
	void Signal_DisplayDefaultFee(QString fee) { QByteArray* t9c15cd = new QByteArray(fee.toUtf8()); Moc_PackedString feePacked = { const_cast<char*>(t9c15cd->prepend("WHITESPACE").constData()+10), t9c15cd->size()-10, t9c15cd };callbackQmlBridgef074ca_DisplayDefaultFee(this, feePacked); };
	void Signal_DisplayNodeFee(QString nodeFee) { QByteArray* t96217f = new QByteArray(nodeFee.toUtf8()); Moc_PackedString nodeFeePacked = { const_cast<char*>(t96217f->prepend("WHITESPACE").constData()+10), t96217f->size()-10, t96217f };callbackQmlBridgef074ca_DisplayNodeFee(this, nodeFeePacked); };
	void Signal_UpdateConfirmationsOfTransaction(qint32 index, QString confirmations) { QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };callbackQmlBridgef074ca_UpdateConfirmationsOfTransaction(this, index, confirmationsPacked); };
	void Signal_DisplayInfoScreen() { callbackQmlBridgef074ca_DisplayInfoScreen(this); };
	void Signal_AddSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridgef074ca_AddSavedAddressToList(this, dbID, namePacked, addressPacked, paymentIDPacked); };
	 ~QmlBridgef074ca() { callbackQmlBridgef074ca_DestroyQmlBridge(this); };
	void childEvent(QChildEvent * event) { callbackQmlBridgef074ca_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackQmlBridgef074ca_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackQmlBridgef074ca_CustomEvent(this, event); };
	void deleteLater() { callbackQmlBridgef074ca_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackQmlBridgef074ca_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackQmlBridgef074ca_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackQmlBridgef074ca_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackQmlBridgef074ca_EventFilter(this, watched, event) != 0; };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridgef074ca_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackQmlBridgef074ca_TimerEvent(this, event); };
signals:
	void displayTotalBalance(QString balance, QString balanceUSD);
	void displayAvailableBalance(QString data);
	void displayLockedBalance(QString data);
	void displayAddress(QString address, QString wallet, bool displayFiatConversion);
	void addTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number);
	void addRemoteNodeToList(QString nodeName);
	void changeTextRemoteNode(qint32 index, QString newText);
	void setSelectedRemoteNode(qint32 index);
	void displayPopup(QString text, qint32 ti);
	void displaySyncingInfo(QString syncing, QString syncingInfo);
	void displayErrorDialog(QString errorText, QString errorInformativeText);
	void displayInfoDialog(QString title, QString mainText, QString informativeText);
	void clearTransferAmount();
	void askForFusion();
	void clearListTransactions();
	void displayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress);
	void displaySeed(QString filename, QString mnemonicSeed, QString walletAddress);
	void displayOpenWalletScreen();
	void displayMainWalletScreen();
	void finishedLoadingWalletd();
	void finishedCreatingWallet();
	void finishedSendingTransaction();
	void displayPathToPreviousWallet(QString pathToPreviousWallet);
	void displayWalletCreationLocation(QString walletLocation);
	void displayUseRemoteNode(bool useRemote);
	void hideSettingsScreen();
	void displaySettingsScreen();
	void displaySettingsValues(bool displayFiat);
	void displaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort);
	void displayFullBalanceInTransferAmount(QString fullBalance);
	void displayDefaultFee(QString fee);
	void displayNodeFee(QString nodeFee);
	void updateConfirmationsOfTransaction(qint32 index, QString confirmations);
	void displayInfoScreen();
	void addSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID);
public slots:
	void log(QString msg) { QByteArray* t19f34e = new QByteArray(msg.toUtf8()); Moc_PackedString msgPacked = { const_cast<char*>(t19f34e->prepend("WHITESPACE").constData()+10), t19f34e->size()-10, t19f34e };callbackQmlBridgef074ca_Log(this, msgPacked); };
	void clickedButtonExplorer(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridgef074ca_ClickedButtonExplorer(this, transactionIDPacked); };
	void goToWebsite(QString url) { QByteArray* t817363 = new QByteArray(url.toUtf8()); Moc_PackedString urlPacked = { const_cast<char*>(t817363->prepend("WHITESPACE").constData()+10), t817363->size()-10, t817363 };callbackQmlBridgef074ca_GoToWebsite(this, urlPacked); };
	void clickedButtonCopyTx(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridgef074ca_ClickedButtonCopyTx(this, transactionIDPacked); };
	void clickedButtonCopyAddress() { callbackQmlBridgef074ca_ClickedButtonCopyAddress(this); };
	void clickedButtonCopyKeys() { callbackQmlBridgef074ca_ClickedButtonCopyKeys(this); };
	void clickedButtonCopy(QString stringToCopy) { QByteArray* te009d3 = new QByteArray(stringToCopy.toUtf8()); Moc_PackedString stringToCopyPacked = { const_cast<char*>(te009d3->prepend("WHITESPACE").constData()+10), te009d3->size()-10, te009d3 };callbackQmlBridgef074ca_ClickedButtonCopy(this, stringToCopyPacked); };
	void clickedButtonSend(QString transferAddress, QString transferAmount, QString transferPaymentID, QString transferFee) { QByteArray* tb2289f = new QByteArray(transferAddress.toUtf8()); Moc_PackedString transferAddressPacked = { const_cast<char*>(tb2289f->prepend("WHITESPACE").constData()+10), tb2289f->size()-10, tb2289f };QByteArray* t307ef6 = new QByteArray(transferAmount.toUtf8()); Moc_PackedString transferAmountPacked = { const_cast<char*>(t307ef6->prepend("WHITESPACE").constData()+10), t307ef6->size()-10, t307ef6 };QByteArray* tc16f3f = new QByteArray(transferPaymentID.toUtf8()); Moc_PackedString transferPaymentIDPacked = { const_cast<char*>(tc16f3f->prepend("WHITESPACE").constData()+10), tc16f3f->size()-10, tc16f3f };QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridgef074ca_ClickedButtonSend(this, transferAddressPacked, transferAmountPacked, transferPaymentIDPacked, transferFeePacked); };
	void clickedButtonBackupWallet() { callbackQmlBridgef074ca_ClickedButtonBackupWallet(this); };
	void clickedCloseWallet() { callbackQmlBridgef074ca_ClickedCloseWallet(this); };
	void clickedButtonOpen(QString pathToWallet, QString passwordWallet) { QByteArray* t6c0b5c = new QByteArray(pathToWallet.toUtf8()); Moc_PackedString pathToWalletPacked = { const_cast<char*>(t6c0b5c->prepend("WHITESPACE").constData()+10), t6c0b5c->size()-10, t6c0b5c };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };callbackQmlBridgef074ca_ClickedButtonOpen(this, pathToWalletPacked, passwordWalletPacked); };
	void clickedButtonCreate(QString filenameWallet, QString passwordWallet, QString confirmPasswordWallet) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };callbackQmlBridgef074ca_ClickedButtonCreate(this, filenameWalletPacked, passwordWalletPacked, confirmPasswordWalletPacked); };
	void clickedButtonImport(QString filenameWallet, QString passwordWallet, QString privateViewKey, QString privateSpendKey, QString mnemonicSeed, QString confirmPasswordWallet, QString scanHeight) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };QByteArray* t32972b = new QByteArray(scanHeight.toUtf8()); Moc_PackedString scanHeightPacked = { const_cast<char*>(t32972b->prepend("WHITESPACE").constData()+10), t32972b->size()-10, t32972b };callbackQmlBridgef074ca_ClickedButtonImport(this, filenameWalletPacked, passwordWalletPacked, privateViewKeyPacked, privateSpendKeyPacked, mnemonicSeedPacked, confirmPasswordWalletPacked, scanHeightPacked); };
	void choseRemote(bool remote) { callbackQmlBridgef074ca_ChoseRemote(this, remote); };
	void selectedRemoteNode(qint32 index) { callbackQmlBridgef074ca_SelectedRemoteNode(this, index); };
	QString getTransferAmountUSD(QString amountTRTL) { QByteArray* te38fb0 = new QByteArray(amountTRTL.toUtf8()); Moc_PackedString amountTRTLPacked = { const_cast<char*>(te38fb0->prepend("WHITESPACE").constData()+10), te38fb0->size()-10, te38fb0 };return ({ Moc_PackedString tempVal = callbackQmlBridgef074ca_GetTransferAmountUSD(this, amountTRTLPacked); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void clickedCloseSettings() { callbackQmlBridgef074ca_ClickedCloseSettings(this); };
	void clickedSettingsButton() { callbackQmlBridgef074ca_ClickedSettingsButton(this); };
	void choseDisplayFiat(bool displayFiat) { callbackQmlBridgef074ca_ChoseDisplayFiat(this, displayFiat); };
	void choseCheckpoints(bool checkpoints) { callbackQmlBridgef074ca_ChoseCheckpoints(this, checkpoints); };
	void saveRemoteDaemonInfo(QString daemonAddress, QString daemonPort) { QByteArray* td2b37c = new QByteArray(daemonAddress.toUtf8()); Moc_PackedString daemonAddressPacked = { const_cast<char*>(td2b37c->prepend("WHITESPACE").constData()+10), td2b37c->size()-10, td2b37c };QByteArray* tcb21fe = new QByteArray(daemonPort.toUtf8()); Moc_PackedString daemonPortPacked = { const_cast<char*>(tcb21fe->prepend("WHITESPACE").constData()+10), tcb21fe->size()-10, tcb21fe };callbackQmlBridgef074ca_SaveRemoteDaemonInfo(this, daemonAddressPacked, daemonPortPacked); };
	void resetRemoteDaemonInfo() { callbackQmlBridgef074ca_ResetRemoteDaemonInfo(this); };
	void getFullBalanceAndDisplayInTransferAmount(QString transferFee) { QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridgef074ca_GetFullBalanceAndDisplayInTransferAmount(this, transferFeePacked); };
	void getDefaultFeeAndDisplay() { callbackQmlBridgef074ca_GetDefaultFeeAndDisplay(this); };
	void limitDisplayTransactions(bool limit) { callbackQmlBridgef074ca_LimitDisplayTransactions(this, limit); };
	QString getVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridgef074ca_GetVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridgef074ca_GetNewVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersionURL() { return ({ Moc_PackedString tempVal = callbackQmlBridgef074ca_GetNewVersionURL(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void optimizeWalletWithFusion() { callbackQmlBridgef074ca_OptimizeWalletWithFusion(this); };
	void saveAddress(QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridgef074ca_SaveAddress(this, namePacked, addressPacked, paymentIDPacked); };
	void fillListSavedAddresses() { callbackQmlBridgef074ca_FillListSavedAddresses(this); };
	void deleteSavedAddress(qint32 dbID) { callbackQmlBridgef074ca_DeleteSavedAddress(this, dbID); };
	void exportListTransactions() { callbackQmlBridgef074ca_ExportListTransactions(this); };
	void registerToGo(QObject* object) { callbackQmlBridgef074ca_RegisterToGo(this, object); };
	void deregisterToGo(QString objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridgef074ca_DeregisterToGo(this, objectNamePacked); };
private:
};

Q_DECLARE_METATYPE(QmlBridgef074ca*)


void QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaTypes() {
}

void QmlBridgef074ca_ConnectDisplayTotalBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displayTotalBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplayTotalBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayTotalBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displayTotalBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplayTotalBalance));
}

void QmlBridgef074ca_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayTotalBalance(QString::fromUtf8(balance.data, balance.len), QString::fromUtf8(balanceUSD.data, balanceUSD.len));
}

void QmlBridgef074ca_ConnectDisplayAvailableBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayAvailableBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayAvailableBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayAvailableBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayAvailableBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayAvailableBalance));
}

void QmlBridgef074ca_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayAvailableBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridgef074ca_ConnectDisplayLockedBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayLockedBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayLockedBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayLockedBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayLockedBalance), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayLockedBalance));
}

void QmlBridgef074ca_DisplayLockedBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayLockedBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridgef074ca_ConnectDisplayAddress(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, bool)>(&QmlBridgef074ca::displayAddress), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, bool)>(&QmlBridgef074ca::Signal_DisplayAddress), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayAddress(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, bool)>(&QmlBridgef074ca::displayAddress), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, bool)>(&QmlBridgef074ca::Signal_DisplayAddress));
}

void QmlBridgef074ca_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayAddress(QString::fromUtf8(address.data, address.len), QString::fromUtf8(wallet.data, wallet.len), displayFiatConversion != 0);
}

void QmlBridgef074ca_ConnectAddTransactionToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridgef074ca::addTransactionToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridgef074ca::Signal_AddTransactionToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectAddTransactionToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridgef074ca::addTransactionToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridgef074ca::Signal_AddTransactionToList));
}

void QmlBridgef074ca_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number)
{
	static_cast<QmlBridgef074ca*>(ptr)->addTransactionToList(QString::fromUtf8(paymentID.data, paymentID.len), QString::fromUtf8(transactionID.data, transactionID.len), QString::fromUtf8(amount.data, amount.len), QString::fromUtf8(confirmations.data, confirmations.len), QString::fromUtf8(ti.data, ti.len), QString::fromUtf8(number.data, number.len));
}

void QmlBridgef074ca_ConnectAddRemoteNodeToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::addRemoteNodeToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_AddRemoteNodeToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectAddRemoteNodeToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::addRemoteNodeToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_AddRemoteNodeToList));
}

void QmlBridgef074ca_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName)
{
	static_cast<QmlBridgef074ca*>(ptr)->addRemoteNodeToList(QString::fromUtf8(nodeName.data, nodeName.len));
}

void QmlBridgef074ca_ConnectChangeTextRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::changeTextRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::Signal_ChangeTextRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectChangeTextRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::changeTextRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::Signal_ChangeTextRemoteNode));
}

void QmlBridgef074ca_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText)
{
	static_cast<QmlBridgef074ca*>(ptr)->changeTextRemoteNode(index, QString::fromUtf8(newText.data, newText.len));
}

void QmlBridgef074ca_ConnectSetSelectedRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32)>(&QmlBridgef074ca::setSelectedRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32)>(&QmlBridgef074ca::Signal_SetSelectedRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectSetSelectedRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32)>(&QmlBridgef074ca::setSelectedRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32)>(&QmlBridgef074ca::Signal_SetSelectedRemoteNode));
}

void QmlBridgef074ca_SetSelectedRemoteNode(void* ptr, int index)
{
	static_cast<QmlBridgef074ca*>(ptr)->setSelectedRemoteNode(index);
}

void QmlBridgef074ca_ConnectDisplayPopup(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, qint32)>(&QmlBridgef074ca::displayPopup), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, qint32)>(&QmlBridgef074ca::Signal_DisplayPopup), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayPopup(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, qint32)>(&QmlBridgef074ca::displayPopup), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, qint32)>(&QmlBridgef074ca::Signal_DisplayPopup));
}

void QmlBridgef074ca_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayPopup(QString::fromUtf8(text.data, text.len), ti);
}

void QmlBridgef074ca_ConnectDisplaySyncingInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displaySyncingInfo), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplaySyncingInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplaySyncingInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displaySyncingInfo), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplaySyncingInfo));
}

void QmlBridgef074ca_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo)
{
	static_cast<QmlBridgef074ca*>(ptr)->displaySyncingInfo(QString::fromUtf8(syncing.data, syncing.len), QString::fromUtf8(syncingInfo.data, syncingInfo.len));
}

void QmlBridgef074ca_ConnectDisplayErrorDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displayErrorDialog), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplayErrorDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayErrorDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displayErrorDialog), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplayErrorDialog));
}

void QmlBridgef074ca_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayErrorDialog(QString::fromUtf8(errorText.data, errorText.len), QString::fromUtf8(errorInformativeText.data, errorInformativeText.len));
}

void QmlBridgef074ca_ConnectDisplayInfoDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::displayInfoDialog), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplayInfoDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayInfoDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::displayInfoDialog), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplayInfoDialog));
}

void QmlBridgef074ca_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayInfoDialog(QString::fromUtf8(title.data, title.len), QString::fromUtf8(mainText.data, mainText.len), QString::fromUtf8(informativeText.data, informativeText.len));
}

void QmlBridgef074ca_ConnectClearTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::clearTransferAmount), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_ClearTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectClearTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::clearTransferAmount), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_ClearTransferAmount));
}

void QmlBridgef074ca_ClearTransferAmount(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->clearTransferAmount();
}

void QmlBridgef074ca_ConnectAskForFusion(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::askForFusion), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_AskForFusion), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectAskForFusion(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::askForFusion), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_AskForFusion));
}

void QmlBridgef074ca_AskForFusion(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->askForFusion();
}

void QmlBridgef074ca_ConnectClearListTransactions(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::clearListTransactions), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_ClearListTransactions), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectClearListTransactions(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::clearListTransactions), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_ClearListTransactions));
}

void QmlBridgef074ca_ClearListTransactions(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->clearListTransactions();
}

void QmlBridgef074ca_ConnectDisplayPrivateKeys(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString)>(&QmlBridgef074ca::displayPrivateKeys), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplayPrivateKeys), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayPrivateKeys(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString)>(&QmlBridgef074ca::displayPrivateKeys), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplayPrivateKeys));
}

void QmlBridgef074ca_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayPrivateKeys(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(privateViewKey.data, privateViewKey.len), QString::fromUtf8(privateSpendKey.data, privateSpendKey.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridgef074ca_ConnectDisplaySeed(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::displaySeed), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplaySeed), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplaySeed(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::displaySeed), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString, QString)>(&QmlBridgef074ca::Signal_DisplaySeed));
}

void QmlBridgef074ca_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridgef074ca*>(ptr)->displaySeed(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridgef074ca_ConnectDisplayOpenWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayOpenWalletScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayOpenWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayOpenWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayOpenWalletScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayOpenWalletScreen));
}

void QmlBridgef074ca_DisplayOpenWalletScreen(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayOpenWalletScreen();
}

void QmlBridgef074ca_ConnectDisplayMainWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayMainWalletScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayMainWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayMainWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayMainWalletScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayMainWalletScreen));
}

void QmlBridgef074ca_DisplayMainWalletScreen(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayMainWalletScreen();
}

void QmlBridgef074ca_ConnectFinishedLoadingWalletd(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedLoadingWalletd), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedLoadingWalletd), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectFinishedLoadingWalletd(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedLoadingWalletd), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedLoadingWalletd));
}

void QmlBridgef074ca_FinishedLoadingWalletd(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->finishedLoadingWalletd();
}

void QmlBridgef074ca_ConnectFinishedCreatingWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedCreatingWallet), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedCreatingWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectFinishedCreatingWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedCreatingWallet), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedCreatingWallet));
}

void QmlBridgef074ca_FinishedCreatingWallet(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->finishedCreatingWallet();
}

void QmlBridgef074ca_ConnectFinishedSendingTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedSendingTransaction), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedSendingTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectFinishedSendingTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::finishedSendingTransaction), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_FinishedSendingTransaction));
}

void QmlBridgef074ca_FinishedSendingTransaction(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->finishedSendingTransaction();
}

void QmlBridgef074ca_ConnectDisplayPathToPreviousWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayPathToPreviousWallet), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayPathToPreviousWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayPathToPreviousWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayPathToPreviousWallet), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayPathToPreviousWallet));
}

void QmlBridgef074ca_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayPathToPreviousWallet(QString::fromUtf8(pathToPreviousWallet.data, pathToPreviousWallet.len));
}

void QmlBridgef074ca_ConnectDisplayWalletCreationLocation(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayWalletCreationLocation), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayWalletCreationLocation), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayWalletCreationLocation(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayWalletCreationLocation), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayWalletCreationLocation));
}

void QmlBridgef074ca_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayWalletCreationLocation(QString::fromUtf8(walletLocation.data, walletLocation.len));
}

void QmlBridgef074ca_ConnectDisplayUseRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::displayUseRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::Signal_DisplayUseRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayUseRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::displayUseRemoteNode), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::Signal_DisplayUseRemoteNode));
}

void QmlBridgef074ca_DisplayUseRemoteNode(void* ptr, char useRemote)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayUseRemoteNode(useRemote != 0);
}

void QmlBridgef074ca_ConnectHideSettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::hideSettingsScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_HideSettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectHideSettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::hideSettingsScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_HideSettingsScreen));
}

void QmlBridgef074ca_HideSettingsScreen(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->hideSettingsScreen();
}

void QmlBridgef074ca_ConnectDisplaySettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displaySettingsScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplaySettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplaySettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displaySettingsScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplaySettingsScreen));
}

void QmlBridgef074ca_DisplaySettingsScreen(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->displaySettingsScreen();
}

void QmlBridgef074ca_ConnectDisplaySettingsValues(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::displaySettingsValues), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::Signal_DisplaySettingsValues), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplaySettingsValues(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::displaySettingsValues), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(bool)>(&QmlBridgef074ca::Signal_DisplaySettingsValues));
}

void QmlBridgef074ca_DisplaySettingsValues(void* ptr, char displayFiat)
{
	static_cast<QmlBridgef074ca*>(ptr)->displaySettingsValues(displayFiat != 0);
}

void QmlBridgef074ca_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displaySettingsRemoteDaemonInfo), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplaySettingsRemoteDaemonInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::displaySettingsRemoteDaemonInfo), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString, QString)>(&QmlBridgef074ca::Signal_DisplaySettingsRemoteDaemonInfo));
}

void QmlBridgef074ca_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort)
{
	static_cast<QmlBridgef074ca*>(ptr)->displaySettingsRemoteDaemonInfo(QString::fromUtf8(remoteNodeAddress.data, remoteNodeAddress.len), QString::fromUtf8(remoteNodePort.data, remoteNodePort.len));
}

void QmlBridgef074ca_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayFullBalanceInTransferAmount), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayFullBalanceInTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayFullBalanceInTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayFullBalanceInTransferAmount), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayFullBalanceInTransferAmount));
}

void QmlBridgef074ca_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayFullBalanceInTransferAmount(QString::fromUtf8(fullBalance.data, fullBalance.len));
}

void QmlBridgef074ca_ConnectDisplayDefaultFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayDefaultFee), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayDefaultFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayDefaultFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayDefaultFee), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayDefaultFee));
}

void QmlBridgef074ca_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayDefaultFee(QString::fromUtf8(fee.data, fee.len));
}

void QmlBridgef074ca_ConnectDisplayNodeFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayNodeFee), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayNodeFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayNodeFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::displayNodeFee), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(QString)>(&QmlBridgef074ca::Signal_DisplayNodeFee));
}

void QmlBridgef074ca_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayNodeFee(QString::fromUtf8(nodeFee.data, nodeFee.len));
}

void QmlBridgef074ca_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::updateConfirmationsOfTransaction), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::Signal_UpdateConfirmationsOfTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectUpdateConfirmationsOfTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::updateConfirmationsOfTransaction), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString)>(&QmlBridgef074ca::Signal_UpdateConfirmationsOfTransaction));
}

void QmlBridgef074ca_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations)
{
	static_cast<QmlBridgef074ca*>(ptr)->updateConfirmationsOfTransaction(index, QString::fromUtf8(confirmations.data, confirmations.len));
}

void QmlBridgef074ca_ConnectDisplayInfoScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayInfoScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayInfoScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectDisplayInfoScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::displayInfoScreen), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)()>(&QmlBridgef074ca::Signal_DisplayInfoScreen));
}

void QmlBridgef074ca_DisplayInfoScreen(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->displayInfoScreen();
}

void QmlBridgef074ca_ConnectAddSavedAddressToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString, QString, QString)>(&QmlBridgef074ca::addSavedAddressToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString, QString, QString)>(&QmlBridgef074ca::Signal_AddSavedAddressToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridgef074ca_DisconnectAddSavedAddressToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString, QString, QString)>(&QmlBridgef074ca::addSavedAddressToList), static_cast<QmlBridgef074ca*>(ptr), static_cast<void (QmlBridgef074ca::*)(qint32, QString, QString, QString)>(&QmlBridgef074ca::Signal_AddSavedAddressToList));
}

void QmlBridgef074ca_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	static_cast<QmlBridgef074ca*>(ptr)->addSavedAddressToList(dbID, QString::fromUtf8(name.data, name.len), QString::fromUtf8(address.data, address.len), QString::fromUtf8(paymentID.data, paymentID.len));
}

void QmlBridgef074ca_Log(void* ptr, struct Moc_PackedString msg)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "log", Q_ARG(QString, QString::fromUtf8(msg.data, msg.len)));
}

void QmlBridgef074ca_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonExplorer", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridgef074ca_GoToWebsite(void* ptr, struct Moc_PackedString url)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "goToWebsite", Q_ARG(QString, QString::fromUtf8(url.data, url.len)));
}

void QmlBridgef074ca_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonCopyTx", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridgef074ca_ClickedButtonCopyAddress(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonCopyAddress");
}

void QmlBridgef074ca_ClickedButtonCopyKeys(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonCopyKeys");
}

void QmlBridgef074ca_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonCopy", Q_ARG(QString, QString::fromUtf8(stringToCopy.data, stringToCopy.len)));
}

void QmlBridgef074ca_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonSend", Q_ARG(QString, QString::fromUtf8(transferAddress.data, transferAddress.len)), Q_ARG(QString, QString::fromUtf8(transferAmount.data, transferAmount.len)), Q_ARG(QString, QString::fromUtf8(transferPaymentID.data, transferPaymentID.len)), Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridgef074ca_ClickedButtonBackupWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonBackupWallet");
}

void QmlBridgef074ca_ClickedCloseWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedCloseWallet");
}

void QmlBridgef074ca_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonOpen", Q_ARG(QString, QString::fromUtf8(pathToWallet.data, pathToWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)));
}

void QmlBridgef074ca_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonCreate", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)));
}

void QmlBridgef074ca_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedButtonImport", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(privateViewKey.data, privateViewKey.len)), Q_ARG(QString, QString::fromUtf8(privateSpendKey.data, privateSpendKey.len)), Q_ARG(QString, QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)), Q_ARG(QString, QString::fromUtf8(scanHeight.data, scanHeight.len)));
}

void QmlBridgef074ca_ChoseRemote(void* ptr, char remote)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "choseRemote", Q_ARG(bool, remote != 0));
}

void QmlBridgef074ca_SelectedRemoteNode(void* ptr, int index)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "selectedRemoteNode", Q_ARG(qint32, index));
}

struct Moc_PackedString QmlBridgef074ca_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getTransferAmountUSD", Q_RETURN_ARG(QString, returnArg), Q_ARG(QString, QString::fromUtf8(amountTRTL.data, amountTRTL.len)));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridgef074ca_ClickedCloseSettings(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedCloseSettings");
}

void QmlBridgef074ca_ClickedSettingsButton(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "clickedSettingsButton");
}

void QmlBridgef074ca_ChoseDisplayFiat(void* ptr, char displayFiat)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "choseDisplayFiat", Q_ARG(bool, displayFiat != 0));
}

void QmlBridgef074ca_ChoseCheckpoints(void* ptr, char checkpoints)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "choseCheckpoints", Q_ARG(bool, checkpoints != 0));
}

void QmlBridgef074ca_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "saveRemoteDaemonInfo", Q_ARG(QString, QString::fromUtf8(daemonAddress.data, daemonAddress.len)), Q_ARG(QString, QString::fromUtf8(daemonPort.data, daemonPort.len)));
}

void QmlBridgef074ca_ResetRemoteDaemonInfo(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "resetRemoteDaemonInfo");
}

void QmlBridgef074ca_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getFullBalanceAndDisplayInTransferAmount", Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridgef074ca_GetDefaultFeeAndDisplay(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getDefaultFeeAndDisplay");
}

void QmlBridgef074ca_LimitDisplayTransactions(void* ptr, char limit)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "limitDisplayTransactions", Q_ARG(bool, limit != 0));
}

struct Moc_PackedString QmlBridgef074ca_GetVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridgef074ca_GetNewVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getNewVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridgef074ca_GetNewVersionURL(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "getNewVersionURL", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridgef074ca_OptimizeWalletWithFusion(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "optimizeWalletWithFusion");
}

void QmlBridgef074ca_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "saveAddress", Q_ARG(QString, QString::fromUtf8(name.data, name.len)), Q_ARG(QString, QString::fromUtf8(address.data, address.len)), Q_ARG(QString, QString::fromUtf8(paymentID.data, paymentID.len)));
}

void QmlBridgef074ca_FillListSavedAddresses(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "fillListSavedAddresses");
}

void QmlBridgef074ca_DeleteSavedAddress(void* ptr, int dbID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "deleteSavedAddress", Q_ARG(qint32, dbID));
}

void QmlBridgef074ca_ExportListTransactions(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "exportListTransactions");
}

void QmlBridgef074ca_RegisterToGo(void* ptr, void* object)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "registerToGo", Q_ARG(QObject*, static_cast<QObject*>(object)));
}

void QmlBridgef074ca_DeregisterToGo(void* ptr, struct Moc_PackedString objectName)
{
	QMetaObject::invokeMethod(static_cast<QmlBridgef074ca*>(ptr), "deregisterToGo", Q_ARG(QString, QString::fromUtf8(objectName.data, objectName.len)));
}

int QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaType()
{
	return qRegisterMetaType<QmlBridgef074ca*>();
}

int QmlBridgef074ca_QmlBridgef074ca_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<QmlBridgef074ca*>(const_cast<const char*>(typeName));
}

int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridgef074ca>();
#else
	return 0;
#endif
}

int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridgef074ca>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

int QmlBridgef074ca_QmlBridgef074ca_QmlRegisterUncreatableType(char* uri, int versionMajor, int versionMinor, char* qmlName, struct Moc_PackedString message)
{
#ifdef QT_QML_LIB
	return qmlRegisterUncreatableType<QmlBridgef074ca>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName), QString::fromUtf8(message.data, message.len));
#else
	return 0;
#endif
}

void* QmlBridgef074ca___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridgef074ca___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridgef074ca___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* QmlBridgef074ca___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QmlBridgef074ca___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QmlBridgef074ca___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QmlBridgef074ca___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridgef074ca___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridgef074ca___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridgef074ca___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridgef074ca___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridgef074ca___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridgef074ca_NewQmlBridge(void* parent)
{
	if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new QmlBridgef074ca(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridgef074ca(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new QmlBridgef074ca(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridgef074ca(static_cast<QWindow*>(parent));
	} else {
		return new QmlBridgef074ca(static_cast<QObject*>(parent));
	}
}

void QmlBridgef074ca_DestroyQmlBridge(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->~QmlBridgef074ca();
}

void QmlBridgef074ca_DestroyQmlBridgeDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void QmlBridgef074ca_ChildEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void QmlBridgef074ca_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void QmlBridgef074ca_CustomEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void QmlBridgef074ca_DeleteLaterDefault(void* ptr)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::deleteLater();
}

void QmlBridgef074ca_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char QmlBridgef074ca_EventDefault(void* ptr, void* e)
{
	return static_cast<QmlBridgef074ca*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char QmlBridgef074ca_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<QmlBridgef074ca*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}



void QmlBridgef074ca_TimerEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridgef074ca*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"
