#include "craxulac.h"

int main(void) {
	HideCursor();

	HWND Console_Handle = GetConsoleWindow();
	HDC Device_Context = GetDC(Console_Handle);

	HPEN Pen = CreatePen(PS_SOLID, 5, RGB(170, 170, 170));
	SelectObject(Device_Context, Pen);
	LineTo(Device_Context, 300, 300);
	ReleaseDC(Console_Handle, Device_Context);
	
	while (!GetKeyState('A')) {
		int Nothing = DoNothing();
	}
	return 0;
}
