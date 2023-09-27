#include <Windows.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	printf("Press '<' (Shift + ,) to toggle cursor lock (this window must be focused)\n");

	bool enabled = true;

	while (true) {
		if (enabled) {
			// Set cursor pos
			int wx = GetSystemMetrics(SM_CXSCREEN);
			int wy = GetSystemMetrics(SM_CYSCREEN);

			SetCursorPos(wx / 2, wy / 2);
		}

		if (_kbhit()) {
			// Check keyboard input
			char ch = _getch();
			if (ch == '<') enabled = !enabled;
		}
	}
}
