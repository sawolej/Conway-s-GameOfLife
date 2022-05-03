
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "appG.h"
#include "app.h"

using namespace std;

AppG::AppG(int px, int py) : App()
{
	x = px;
	y = py;
}
AppG::~AppG()
{
}
AppG::AppG(const AppG& co)
{

}
AppG& AppG::operator= (const AppG& co)
{
	if (&co == this) return *this;

}

void AppG::view(int i, int j)
{
	getxy(i, j);
	if (arr1[i][j] == 1) cout << ".";
	else cout << " ";
}
