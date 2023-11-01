#include "window.h"

#ifdef _WIN32

#include <windows.h>

int WINAPI WinMain(HINSTANCE instanceHandle, HINSTANCE previousHandle,
	PSTR commandArguments, int showState) {

	SetMainWindow("Physio", 1024, 768, showState);

	while (MainWindowOpen()) {}

	return 0;
}

#endif
