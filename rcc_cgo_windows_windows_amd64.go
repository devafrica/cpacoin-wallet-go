package main

/*
#cgo CFLAGS: -fno-keep-inline-dllexport -O2 -Wall -W -Wextra -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NEEDS_QMAIN -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB
#cgo CXXFLAGS: -fno-keep-inline-dllexport -O2 -Wall -W -Wextra -fexceptions -mthreads -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NEEDS_QMAIN -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB
#cgo CXXFLAGS: -I../../src -I. -I../github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/include -I../github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/include/QtGui -I../github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/include/QtANGLE -I../github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/include/QtCore -Irelease -I/include -I../github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/mkspecs/win32-g++
#cgo LDFLAGS:         -mthreads -L C:/cpa-wallet/src/github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/lib
#cgo LDFLAGS:        C:/cpa-wallet/src/github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/lib/libQt5Gui.a C:/cpa-wallet/src/github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/lib/libQt5Core.a  -lmingw32 C:/cpa-wallet/src/github.com/therecipe/env_windows_amd64_513/5.13.0/mingw73_64/lib/libqtmain.a
#cgo LDFLAGS: -Wl,--allow-multiple-definition
#cgo CFLAGS: -Wno-unused-parameter -Wno-unused-variable -Wno-return-type
#cgo CXXFLAGS: -Wno-unused-parameter -Wno-unused-variable -Wno-return-type
*/
import "C"
