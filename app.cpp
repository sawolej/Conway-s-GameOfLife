#include <iostream>
#include <cstdlib>
#include <windows.h>
#include<fstream>
#include "app.h"

using namespace std;

App::App()
{
	x = 100;
	y = 100;
	int arx = x + 5;
	int ary = y + 5;
	arr1 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr1[i] = new int[ary];

	arr2 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr2[i] = new int[ary];
}
App::~App()
{
	if(arr1){
	for (int i = 0; i < x; i++) {
		delete[] arr1[i];
	}
	delete[] arr1;
	}
	if (arr2) {
		for (int i = 0; i < x; i++) {
			delete[] arr2[i];
		}
		delete[] arr2;
	}

	x = 0;
	y = 0;
}
App::App(const App& co)
{
	x = co.x;
	y = co.y;

	int arx = x + 5;
	int ary = y + 5;

	arr1 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr1[i] = new int[ary];
	for (int i = 0; i < arx; i++)
		for (int j = 0; j < ary; j++)
			arr1[i][j] = co.arr1[i][j];

	arr2 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr2[i] = new int[ary];
	for (int i = 0; i < arx; i++)
		for (int j = 0; j < ary; j++)
			arr2[i][j] = co.arr2[i][j];

}

App& App::operator= (const App& co)
{
	if (&co == this) return *this;
	x = co.x;
	y = co.y;

	int arx = x + 5;
	int ary = y + 5;

	arr1 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr1[i] = new int[ary];
	for (int i = 0; i < arx; i++)
		for (int j = 0; j < ary; j++)
			arr1[i][j] = co.arr1[i][j];

	arr2 = new int* [arx];
	for (int i = 0; i < arx; ++i)
		arr2[i] = new int[ary];
	for (int i = 0; i < arx; i++)
		for (int j = 0; j < ary; j++)
			arr2[i][j] = co.arr2[i][j];
	return *this;
}
void App::getxy(int x, int y) {
	COORD cords;
	cords.X = x;
	cords.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cords);
}
void App::makeBoard()
{
    // 5. Brush
   _hwnd = hwnd;
   _hdc = GetDC( _hwnd );
   _MyBrush = ::CreateSolidBrush(0x00fff000);
   _BgBrush = ::CreateSolidBrush(0x00000fff);
//   _BgBrush = (HBRUSH)::SelectObject( _hdc, WHITE_BRUSH );


}

void App::play()
{
    	for (int i = 1; i <= x; i++)
		for (int j = 1; j <= y; j++)
		{
			arr1[i][j] = 0;
		}
	int aliveN;

	while (1) {

		for (int i = 2; i <= x - 1; i++)
			for (int j = 2; j <= y - 1; j++)
			{
				view(i, j);

			}

		for (int i = 2; i <= x - 1; i++)
			for (int j = 2; j <= y - 1; j++)
			{
				arr2[i][j] = arr1[i][j];
				aliveN = arr1[i - 1][j - 1] + arr1[i][j - 1] + arr1[i + 1][j - 1] + arr1[i - 1][j] + arr1[i + 1][j] + arr1[i + 1][j + 1] + arr1[i][j + 1] + arr1[i - 1][j + 1];
				if (arr1[i][j] == 1)
				{
					if (aliveN < 2 || aliveN > 3) arr2[i][j] = 0;
					else  arr2[i][j] = 1;
				}
				else {
					if (aliveN == 3) arr2[i][j] = 1;
				}


			}
		for (int i = 2; i <= x - 1; i++)
			for (int j = 2; j <= y - 1; j++)
				arr1[i][j] = arr2[i][j];
	}

}
