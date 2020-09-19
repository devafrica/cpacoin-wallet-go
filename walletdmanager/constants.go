// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, The CryptoPayAfrica Developers
//
// Please see the included LICENSE file for more information.
//

package walletdmanager

const (
	// DefaultTransferFee is the default fee. It is expressed in CPA
	DefaultTransferFee float64 = 0.10000

	logWalletdCurrentSessionFilename     = "cpawalled-service-session.log"
	logWalletdAllSessionsFilename        = "cpawalled-service.log"
	logTurtleCoindCurrentSessionFilename = "cpacoind-session.log"
	logTurtleCoindAllSessionsFilename    = "cpacoind.log"
	walletdLogLevel                      = "3" // should be at least 3 as I use some logs messages to confirm creation of wallet
	walletdCommandName                   = "cpawalled-service"
	turtlecoindCommandName               = "cpacoind"
)
