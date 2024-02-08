#pragma once

#include <windows.h>

int DoNothing() {
	return 0;
}

void HideCursor() {
	HANDLE Output_Handle = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO Cursor_Info;
	GetConsoleCursorInfo(Output_Handle, &Cursor_Info);
	Cursor_Info.bVisible = false;
	SetConsoleCursorInfo(Output_Handle, &Cursor_Info);
}
