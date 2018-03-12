#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <string>

/*
u - up
d - down
l - left
r - right

h - head
t - tail

w - wall
s - side wall
g - grass
f - fruit
*/

HWND myconsole = GetConsoleWindow();
HDC mydc = GetDC(myconsole);

void body_parts(const char& prev, const char& current, const int& x, const int& y, const char& part) {
	COLORREF l_green = RGB(77, 226, 33);
	COLORREF d_green = RGB(34, 177, 76);
	COLORREF brown = RGB(239, 228, 176);
	COLORREF black = RGB(0, 0, 0);

	if (part == 'h') {
		if (current == 'r') {
			SetPixel(mydc, x - 2, y - 1, l_green);
			SetPixel(mydc, x - 1, y - 1, l_green);
			SetPixel(mydc, x, y - 1, l_green);

			SetPixel(mydc, x - 2, y, d_green);
			SetPixel(mydc, x - 1, y, d_green);
			SetPixel(mydc, x, y, black);
			SetPixel(mydc, x + 1, y, d_green);

			SetPixel(mydc, x - 2, y + 1, d_green);
			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, d_green);
			SetPixel(mydc, x + 1, y + 1, d_green);
			SetPixel(mydc, x + 2, y + 1, d_green);

			SetPixel(mydc, x - 2, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, d_green);
			SetPixel(mydc, x, y + 2, d_green);
			SetPixel(mydc, x + 1, y + 2, d_green);
			SetPixel(mydc, x + 2, y + 2, d_green);
		}
		else if (current == 'l') {
			SetPixel(mydc, x + 2, y - 1, l_green);
			SetPixel(mydc, x + 1, y - 1, l_green);
			SetPixel(mydc, x, y - 1, l_green);

			SetPixel(mydc, x + 2, y, d_green);
			SetPixel(mydc, x + 1, y, d_green);
			SetPixel(mydc, x, y, black);
			SetPixel(mydc, x - 1, y, d_green);

			SetPixel(mydc, x + 2, y + 1, d_green);
			SetPixel(mydc, x + 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, d_green);
			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x - 2, y + 1, d_green);

			SetPixel(mydc, x + 2, y + 2, d_green);
			SetPixel(mydc, x + 1, y + 2, d_green);
			SetPixel(mydc, x, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, d_green);
			SetPixel(mydc, x - 2, y + 2, d_green);
		}
		else if (current == 'u') {
			SetPixel(mydc, x - 1, y - 2, d_green);
			SetPixel(mydc, x, y - 2, d_green);
			SetPixel(mydc, x + 1, y - 2, d_green);

			SetPixel(mydc, x - 2, y - 1, d_green);
			SetPixel(mydc, x - 1, y - 1, d_green);
			SetPixel(mydc, x, y - 1, d_green);
			SetPixel(mydc, x + 1, y - 1, d_green);
			SetPixel(mydc, x + 2, y - 1, d_green);

			SetPixel(mydc, x - 2, y, black);
			SetPixel(mydc, x - 1, y, d_green);
			SetPixel(mydc, x, y, l_green);
			SetPixel(mydc, x + 1, y, d_green);
			SetPixel(mydc, x + 2, y, black);

			SetPixel(mydc, x - 2, y + 1, d_green);
			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, l_green);
			SetPixel(mydc, x + 1, y + 1, d_green);
			SetPixel(mydc, x + 2, y + 1, d_green);

			SetPixel(mydc, x - 2, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, l_green);
			SetPixel(mydc, x, y + 2, l_green);
			SetPixel(mydc, x + 1, y + 2, l_green);
			SetPixel(mydc, x + 2, y + 2, d_green);
		}
		else {
			SetPixel(mydc, x - 1, y + 2, d_green);
			SetPixel(mydc, x, y + 2, d_green);
			SetPixel(mydc, x + 1, y + 2, d_green);

			SetPixel(mydc, x - 2, y + 1, d_green);
			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, d_green);
			SetPixel(mydc, x + 1, y + 1, d_green);
			SetPixel(mydc, x + 2, y + 1, d_green);

			SetPixel(mydc, x - 2, y, black);
			SetPixel(mydc, x - 1, y, d_green);
			SetPixel(mydc, x, y, l_green);
			SetPixel(mydc, x + 1, y, d_green);
			SetPixel(mydc, x + 2, y, black);

			SetPixel(mydc, x - 2, y - 1, d_green);
			SetPixel(mydc, x - 1, y - 1, d_green);
			SetPixel(mydc, x, y - 1, l_green);
			SetPixel(mydc, x + 1, y - 1, d_green);
			SetPixel(mydc, x + 2, y - 1, d_green);

			SetPixel(mydc, x - 2, y - 2, d_green);
			SetPixel(mydc, x - 1, y - 2, l_green);
			SetPixel(mydc, x, y - 2, l_green);
			SetPixel(mydc, x + 1, y - 2, l_green);
			SetPixel(mydc, x + 2, y - 2, d_green);
		}
	}
	else if (part == 't') {
		if (current == 'r') {
			SetPixel(mydc, x + 1, y, l_green);
			SetPixel(mydc, x + 2, y, l_green);

			SetPixel(mydc, x - 1, y + 1, l_green);
			SetPixel(mydc, x, y + 1, l_green);
			SetPixel(mydc, x + 1, y + 1, d_green);
			SetPixel(mydc, x + 2, y + 1, d_green);

			SetPixel(mydc, x - 2, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, d_green);
			SetPixel(mydc, x, y + 2, d_green);
			SetPixel(mydc, x + 1, y + 2, d_green);
			SetPixel(mydc, x + 2, y + 2, brown);
		}
		else if (current == 'l') {
			SetPixel(mydc, x - 1, y, l_green);
			SetPixel(mydc, x - 2, y, l_green);

			SetPixel(mydc, x + 1, y + 1, l_green);
			SetPixel(mydc, x, y + 1, l_green);
			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x - 2, y + 1, d_green);

			SetPixel(mydc, x + 2, y + 2, d_green);
			SetPixel(mydc, x + 1, y + 2, d_green);
			SetPixel(mydc, x, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, d_green);
			SetPixel(mydc, x - 2, y + 2, brown);
		}
		else if (current == 'u') {
			SetPixel(mydc, x - 2, y - 2, d_green);
			SetPixel(mydc, x - 1, y - 2, l_green);
			SetPixel(mydc, x, y - 2, l_green);
			SetPixel(mydc, x + 1, y - 2, l_green);
			SetPixel(mydc, x + 2, y - 2, d_green);

			SetPixel(mydc, x - 1, y - 1, d_green);
			SetPixel(mydc, x, y - 1, l_green);
			SetPixel(mydc, x + 1, y - 1, d_green);

			SetPixel(mydc, x - 1, y, d_green);
			SetPixel(mydc, x, y, l_green);
			SetPixel(mydc, x + 1, y, d_green);

			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, d_green);
			SetPixel(mydc, x + 1, y + 1, d_green);

			SetPixel(mydc, x, y + 2, d_green);
		}
		else {
			SetPixel(mydc, x - 2, y + 2, d_green);
			SetPixel(mydc, x - 1, y + 2, l_green);
			SetPixel(mydc, x, y + 2, l_green);
			SetPixel(mydc, x + 1, y + 2, l_green);
			SetPixel(mydc, x + 2, y + 2, d_green);

			SetPixel(mydc, x - 1, y + 1, d_green);
			SetPixel(mydc, x, y + 1, l_green);
			SetPixel(mydc, x + 1, y + 1, d_green);

			SetPixel(mydc, x - 1, y, d_green);
			SetPixel(mydc, x, y, l_green);
			SetPixel(mydc, x + 1, y, d_green);

			SetPixel(mydc, x - 1, y - 1, d_green);
			SetPixel(mydc, x, y - 1, d_green);
			SetPixel(mydc, x + 1, y - 1, d_green);

			SetPixel(mydc, x, y - 2, d_green);
		}
	}
	else {
		if (current == prev) {
			if (current == 'r') {
				SetPixel(mydc, x - 2, y - 1, l_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x + 2, y - 1, l_green);

				SetPixel(mydc, x - 2, y, d_green);
				SetPixel(mydc, x - 1, y, d_green);
				SetPixel(mydc, x, y, d_green);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x + 2, y, d_green);

				SetPixel(mydc, x - 2, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, d_green);
				SetPixel(mydc, x, y + 1, d_green);
				SetPixel(mydc, x + 1, y + 1, d_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x - 2, y + 2, brown);
				SetPixel(mydc, x - 1, y + 2, brown);
				SetPixel(mydc, x, y + 2, brown);
				SetPixel(mydc, x + 1, y + 2, brown);
				SetPixel(mydc, x + 2, y + 2, brown);
			}
			else if (current == 'l') {
				SetPixel(mydc, x - 2, y - 1, l_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x + 2, y - 1, l_green);

				SetPixel(mydc, x - 2, y, d_green);
				SetPixel(mydc, x - 1, y, d_green);
				SetPixel(mydc, x, y, d_green);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x + 2, y, d_green);

				SetPixel(mydc, x - 2, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, d_green);
				SetPixel(mydc, x, y + 1, d_green);
				SetPixel(mydc, x + 1, y + 1, d_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x - 2, y + 2, brown);
				SetPixel(mydc, x - 1, y + 2, brown);
				SetPixel(mydc, x, y + 2, brown);
				SetPixel(mydc, x + 1, y + 2, brown);
				SetPixel(mydc, x + 2, y + 2, brown);
			}
			else if (current == 'u') {
				SetPixel(mydc, x - 2, y - 2, d_green);
				SetPixel(mydc, x - 1, y - 2, l_green);
				SetPixel(mydc, x, y - 2, l_green);
				SetPixel(mydc, x + 1, y - 2, l_green);
				SetPixel(mydc, x + 2, y - 2, d_green);

				SetPixel(mydc, x - 2, y - 1, d_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x + 2, y - 1, d_green);

				SetPixel(mydc, x - 2, y, d_green);
				SetPixel(mydc, x - 1, y, l_green);
				SetPixel(mydc, x, y, l_green);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x + 2, y, d_green);

				SetPixel(mydc, x - 2, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, l_green);
				SetPixel(mydc, x, y + 1, l_green);
				SetPixel(mydc, x + 1, y + 1, l_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x - 2, y + 2, d_green);
				SetPixel(mydc, x - 1, y + 2, d_green);
				SetPixel(mydc, x, y + 2, l_green);
				SetPixel(mydc, x + 1, y + 2, l_green);
				SetPixel(mydc, x + 2, y + 2, d_green);
			}
			else {
				SetPixel(mydc, x - 2, y + 2, d_green);
				SetPixel(mydc, x - 1, y + 2, l_green);
				SetPixel(mydc, x, y + 2, l_green);
				SetPixel(mydc, x + 1, y + 2, l_green);
				SetPixel(mydc, x + 2, y + 2, d_green);

				SetPixel(mydc, x - 2, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, l_green);
				SetPixel(mydc, x, y + 1, l_green);
				SetPixel(mydc, x + 1, y + 1, l_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x - 2, y, d_green);
				SetPixel(mydc, x - 1, y, l_green);
				SetPixel(mydc, x, y, l_green);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x + 2, y, d_green);

				SetPixel(mydc, x - 2, y - 1, d_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x + 2, y - 1, d_green);

				SetPixel(mydc, x - 2, y - 2, d_green);
				SetPixel(mydc, x - 1, y - 2, d_green);
				SetPixel(mydc, x, y - 2, l_green);
				SetPixel(mydc, x + 1, y - 2, l_green);
				SetPixel(mydc, x + 2, y - 2, d_green);
			}
		}
		else {
			if ((prev == 'r' && current == 'd') || (prev == 'u' && current == 'l')) {
				SetPixel(mydc, x - 2, y - 1, l_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);

				SetPixel(mydc, x - 2, y, l_green);
				SetPixel(mydc, x - 1, y, l_green);
				SetPixel(mydc, x, y, l_green);
				SetPixel(mydc, x + 1, y, l_green);

				SetPixel(mydc, x - 2, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, l_green);
				SetPixel(mydc, x, y + 1, l_green);
				SetPixel(mydc, x + 1, y + 1, l_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x - 2, y + 2, d_green);
				SetPixel(mydc, x - 1, y + 2, l_green);
				SetPixel(mydc, x, y + 2, l_green);
				SetPixel(mydc, x + 1, y + 2, l_green);
				SetPixel(mydc, x + 2, y + 2, d_green);
			}
			else if ((prev == 'd' && current == 'r') || (prev == 'l' && current == 'u')) {
				SetPixel(mydc, x - 2, y - 2, d_green);
				SetPixel(mydc, x - 1, y - 2, l_green);
				SetPixel(mydc, x, y - 2, l_green);
				SetPixel(mydc, x + 1, y - 2, l_green);
				SetPixel(mydc, x + 2, y - 2, d_green);

				SetPixel(mydc, x - 2, y - 1, d_green);
				SetPixel(mydc, x - 1, y - 1, d_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x + 2, y - 1, l_green);

				SetPixel(mydc, x - 2, y, brown);
				SetPixel(mydc, x - 1, y, d_green);
				SetPixel(mydc, x, y, d_green);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x + 2, y, d_green);

				SetPixel(mydc, x - 1, y + 1, brown);
				SetPixel(mydc, x, y + 1, d_green);
				SetPixel(mydc, x + 1, y + 1, d_green);
				SetPixel(mydc, x + 2, y + 1, d_green);

				SetPixel(mydc, x, y + 2, brown);
				SetPixel(mydc, x + 1, y + 2, brown);
				SetPixel(mydc, x + 2, y + 2, brown);
			}
			else if ((prev == 'r' && current == 'u') || (prev == 'd' && current == 'l')) {
				SetPixel(mydc, x + 2, y - 2, d_green);
				SetPixel(mydc, x + 1, y - 2, l_green);
				SetPixel(mydc, x, y - 2, l_green);
				SetPixel(mydc, x - 1, y - 2, l_green);
				SetPixel(mydc, x - 2, y - 2, d_green);

				SetPixel(mydc, x + 2, y - 1, d_green);
				SetPixel(mydc, x + 1, y - 1, d_green);
				SetPixel(mydc, x, y - 1, l_green);
				SetPixel(mydc, x - 1, y - 1, l_green);
				SetPixel(mydc, x - 2, y - 1, l_green);

				SetPixel(mydc, x + 2, y, brown);
				SetPixel(mydc, x + 1, y, d_green);
				SetPixel(mydc, x, y, d_green);
				SetPixel(mydc, x - 1, y, d_green);
				SetPixel(mydc, x - 2, y, d_green);

				SetPixel(mydc, x + 1, y + 1, brown);
				SetPixel(mydc, x, y + 1, d_green);
				SetPixel(mydc, x - 1, y + 1, d_green);
				SetPixel(mydc, x - 2, y + 1, d_green);

				SetPixel(mydc, x, y + 2, brown);
				SetPixel(mydc, x - 1, y + 2, brown);
				SetPixel(mydc, x - 2, y + 2, brown);
			}
			else {
				SetPixel(mydc, x + 2, y - 1, l_green);
				SetPixel(mydc, x + 1, y - 1, l_green);
				SetPixel(mydc, x, y - 1, l_green);

				SetPixel(mydc, x + 2, y, l_green);
				SetPixel(mydc, x + 1, y, l_green);
				SetPixel(mydc, x, y, l_green);
				SetPixel(mydc, x - 1, y, l_green);

				SetPixel(mydc, x + 2, y + 1, d_green);
				SetPixel(mydc, x + 1, y + 1, l_green);
				SetPixel(mydc, x, y + 1, l_green);
				SetPixel(mydc, x - 1, y + 1, l_green);
				SetPixel(mydc, x - 2, y + 1, d_green);

				SetPixel(mydc, x + 2, y + 2, d_green);
				SetPixel(mydc, x + 1, y + 2, l_green);
				SetPixel(mydc, x, y + 2, l_green);
				SetPixel(mydc, x - 1, y + 2, l_green);
				SetPixel(mydc, x - 2, y + 2, d_green);
			}
		}
	}

}

void other_parts(const char& a, const int& x, const int& y) {
	if (a == 's') {
		COLORREF l_grey = RGB(200, 200, 200);

		SetPixel(mydc, x - 2, y - 2, l_grey);
		SetPixel(mydc, x - 1, y - 2, l_grey);
		SetPixel(mydc, x, y - 2, l_grey);
		SetPixel(mydc, x + 1, y - 2, l_grey);
		SetPixel(mydc, x + 2, y - 2, l_grey);

		SetPixel(mydc, x - 2, y - 1, l_grey);
		SetPixel(mydc, x - 1, y - 1, l_grey);
		SetPixel(mydc, x, y - 1, l_grey);
		SetPixel(mydc, x + 1, y - 1, l_grey);
		SetPixel(mydc, x + 2, y - 1, l_grey);

		SetPixel(mydc, x - 2, y, l_grey);
		SetPixel(mydc, x - 1, y, l_grey);
		SetPixel(mydc, x, y, l_grey);
		SetPixel(mydc, x + 1, y, l_grey);
		SetPixel(mydc, x + 2, y, l_grey);

		SetPixel(mydc, x - 2, y + 1, l_grey);
		SetPixel(mydc, x - 1, y + 1, l_grey);
		SetPixel(mydc, x, y + 1, l_grey);
		SetPixel(mydc, x + 1, y + 1, l_grey);
		SetPixel(mydc, x + 2, y + 1, l_grey);

		SetPixel(mydc, x - 2, y + 2, l_grey);
		SetPixel(mydc, x - 1, y + 2, l_grey);
		SetPixel(mydc, x, y + 2, l_grey);
		SetPixel(mydc, x + 1, y + 2, l_grey);
		SetPixel(mydc, x + 2, y + 2, l_grey);
	}
	else if (a == 'g') {
		COLORREF ground = RGB(255, 255, 255);

		SetPixel(mydc, x - 2, y - 2, ground);
		SetPixel(mydc, x - 1, y - 2, ground);
		SetPixel(mydc, x, y - 2, ground);
		SetPixel(mydc, x + 1, y - 2, ground);
		SetPixel(mydc, x + 2, y - 2, ground);

		SetPixel(mydc, x - 2, y - 1, ground);
		SetPixel(mydc, x - 1, y - 1, ground);
		SetPixel(mydc, x, y - 1, ground);
		SetPixel(mydc, x + 1, y - 1, ground);
		SetPixel(mydc, x + 2, y - 1, ground);

		SetPixel(mydc, x - 2, y, ground);
		SetPixel(mydc, x - 1, y, ground);
		SetPixel(mydc, x, y, ground);
		SetPixel(mydc, x + 1, y, ground);
		SetPixel(mydc, x + 2, y, ground);

		SetPixel(mydc, x - 2, y + 1, ground);
		SetPixel(mydc, x - 1, y + 1, ground);
		SetPixel(mydc, x, y + 1, ground);
		SetPixel(mydc, x + 1, y + 1, ground);
		SetPixel(mydc, x + 2, y + 1, ground);

		SetPixel(mydc, x - 2, y + 2, ground);
		SetPixel(mydc, x - 1, y + 2, ground);
		SetPixel(mydc, x, y + 2, ground);
		SetPixel(mydc, x + 1, y + 2, ground);
		SetPixel(mydc, x + 2, y + 2, ground);
	}
	else if (a == 'f') {
		COLORREF red = RGB(255, 0, 0);
		COLORREF pink = RGB(255, 100, 100);

		SetPixel(mydc, x, y - 2, pink);

		SetPixel(mydc, x - 1, y - 1, pink);
		SetPixel(mydc, x, y - 1, red);
		SetPixel(mydc, x + 1, y - 1, pink);

		SetPixel(mydc, x - 2, y, pink);
		SetPixel(mydc, x - 1, y, red);
		SetPixel(mydc, x, y, red);
		SetPixel(mydc, x + 1, y, red);
		SetPixel(mydc, x + 2, y, pink);

		SetPixel(mydc, x - 1, y + 1, red);
		SetPixel(mydc, x, y + 1, red);
		SetPixel(mydc, x + 1, y + 1, red);

		SetPixel(mydc, x, y + 2, red);
	}
	else {
		COLORREF grey = RGB(175, 175, 175);
		COLORREF l_grey = RGB(200, 200, 200);

		SetPixel(mydc, x - 2, y - 2, l_grey);
		SetPixel(mydc, x - 1, y - 2, l_grey);
		SetPixel(mydc, x, y - 2, l_grey);
		SetPixel(mydc, x + 1, y - 2, l_grey);
		SetPixel(mydc, x + 2, y - 2, l_grey);

		SetPixel(mydc, x - 2, y - 1, l_grey);
		SetPixel(mydc, x - 1, y - 1, l_grey);
		SetPixel(mydc, x, y - 1, l_grey);
		SetPixel(mydc, x + 1, y - 1, l_grey);
		SetPixel(mydc, x + 2, y - 1, l_grey);

		SetPixel(mydc, x - 2, y, grey);
		SetPixel(mydc, x - 1, y, grey);
		SetPixel(mydc, x, y, grey);
		SetPixel(mydc, x + 1, y, grey);
		SetPixel(mydc, x + 2, y, grey);

		SetPixel(mydc, x - 2, y + 1, grey);
		SetPixel(mydc, x - 1, y + 1, grey);
		SetPixel(mydc, x, y + 1, grey);
		SetPixel(mydc, x + 1, y + 1, grey);
		SetPixel(mydc, x + 2, y + 1, grey);

		SetPixel(mydc, x - 2, y + 2, grey);
		SetPixel(mydc, x - 1, y + 2, grey);
		SetPixel(mydc, x, y + 2, grey);
		SetPixel(mydc, x + 1, y + 2, grey);
		SetPixel(mydc, x + 2, y + 2, grey);
	}
}

class Turf {
	int size = 41;
	std::vector<std::pair<int, int> > obstacles;
public:
	Turf() {
		for (int y = 0; y < size + 2; y++) {
			for (int x = 0; x < size + 2; x++) {
				if ((x == 0 || x == size + 1) && y != size + 1) {
					other_parts('s', x * 5 + 3, y * 5 + 3);
					obstacles.push_back(std::make_pair(x * 5 + 3, y * 5 + 3));
				}
				else if (y == 0 || y == size + 1) {
					other_parts('w', x * 5 + 3, y * 5 + 3);
					obstacles.push_back(std::make_pair(x * 5 + 3, y * 5 + 3));
				}
				else
					other_parts('g', x * 5 + 3, y * 5 + 3);
			}
		}
	}

	int get_size() {
		return this->size;
	}

	void add_obstacle(const int& x, const int& y) {
		obstacles.push_back(std::make_pair(x, y));
	}

	void remove_obstacle() {
		obstacles.erase(obstacles.begin() + 168);
	}

	bool free_space(const int& x, const int& y) {
		for (int i = 0; i < obstacles.size(); i++) {
			if (x == obstacles[i].first && y == obstacles[i].second) {
				return false;
			}
		}
		return true;
	}
};

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}

class Snake {
	std::vector<char> direction;
	std::pair<int, int> food;

	std::pair<int, int> tail;
	std::pair<int, int> first_body;
	std::pair<int, int> head;

	int length;
	char current_dir;
public:
	Snake(Turf& turf) {
		body_parts('u', 'u', (turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 6) * 5 + 3, 'h');
		direction.push_back('u');
		turf.add_obstacle((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 6) * 5 + 3);
		head = std::make_pair((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 6) * 5 + 3);

		body_parts('u', 'u', (turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 5) * 5 + 3, 'b');
		direction.push_back('u');
		turf.add_obstacle((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 5) * 5 + 3);
		first_body = std::make_pair((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 5) * 5 + 3);

		body_parts('u', 'u', (turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 4) * 5 + 3, 't');
		direction.push_back('u');
		turf.add_obstacle((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 4) * 5 + 3);
		tail = std::make_pair((turf.get_size() / 2 + 1) * 5 + 3, (turf.get_size() - 4) * 5 + 3);

		length = 3;
		current_dir = 'u';

		gotoxy(0, 14);
		std::cout << length << "   ";
	}

	void change_dir(const char& dir) {
		if (dir == 'u' && current_dir != 'd') {
			this->current_dir = dir;
		}
		else if (dir == 'd' && current_dir != 'u') {
			this->current_dir = dir;
		}
		else if (dir == 'l' && current_dir != 'r') {
			this->current_dir = dir;
		}
		else if (dir == 'r' && current_dir != 'l') {
			this->current_dir = dir;
		}
	}

	void move(Turf& turf, bool& game_over) {
		if (current_dir == 'u') {
			head.second -= 5;
			direction.push_back('u');
		}
		else if (current_dir == 'd') {
			head.second += 5;
			direction.push_back('d');
		}
		else if (current_dir == 'l') {
			head.first -= 5;
			direction.push_back('l');
		}
		else if (current_dir == 'r') {
			head.first += 5;
			direction.push_back('r');
		}

		if (turf.free_space(head.first, head.second)) {
			body_parts('u', current_dir, head.first, head.second, 'h');
			turf.add_obstacle(head.first, head.second);

			other_parts('g', first_body.first, first_body.second);
			body_parts(direction[direction.size() - 2], direction[direction.size() - 1], first_body.first, first_body.second, 'b');
			first_body = head;

			if (head == food) {
				food_gen(turf);
				length++;

				gotoxy(0, 14);
				std::cout << length;
			}
			else {
				other_parts('g', tail.first, tail.second);

				if (direction[1] == 'u') {
					tail.second -= 5;
				}
				else if (direction[1] == 'd') {
					tail.second += 5;
				}
				else if (direction[1] == 'l') {
					tail.first -= 5;
				}
				else if (direction[1] == 'r') {
					tail.first += 5;
				}

				other_parts('g', tail.first, tail.second);
				body_parts('u', direction[2], tail.first, tail.second, 't');

				turf.remove_obstacle();
				direction.erase(direction.begin());
			}
		}
		else
			game_over = true;
	}

	void food_gen(Turf& turf) {
		int x;
		int y;

		do {
			x = 1 + (rand() % turf.get_size());
			y = 1 + (rand() % turf.get_size());
		} while (!turf.free_space(x * 5 + 3, y * 5 + 3));

		other_parts('f', (x * 5) + 3, (y * 5) + 3);
		food = std::make_pair((x * 5) + 3, (y * 5) + 3);
	}

};

void keyboard(Snake& snake) {
	if (GetKeyState(VK_UP) & 0x8000) {
		snake.change_dir('u');
	}
	else if (GetKeyState(VK_DOWN) & 0x8000) {
		snake.change_dir('d');
	}
	else if (GetKeyState(VK_LEFT) & 0x8000) {
		snake.change_dir('l');
	}
	else if (GetKeyState(VK_RIGHT) & 0x8000) {
		snake.change_dir('r');
	}
}

int main() {
	gotoxy(0, 14);

	srand(time(0));
	
	while (true) {
		Sleep(100);
		bool game_over = false;

		Turf turf;
		Snake snake(turf);

		snake.food_gen(turf);

		while (!game_over) {
			keyboard(snake);

			snake.move(turf, game_over);

			Sleep(75);
		}

		Sleep(3000);
	}

	std::cin.ignore();
	return 0;
}