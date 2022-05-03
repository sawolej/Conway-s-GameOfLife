
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "appTXT.h"
#include "app.h"

using namespace std;

AppTXT::AppTXT(int px, int py) : App()
{
	x = px;
	y = py;
}
AppTXT::~AppTXT()
{
}
AppTXT::AppTXT(const AppTXT& co)
{

}
AppTXT& AppTXT::operator= (const AppTXT& co)
{
	if (&co == this) return *this;


}
void AppTXT::view(int i, int j)
{
	cout << "cell " << i << " " << j << ": ";
	if (arr1[i][j] == 1) cout << "alive \n";
	else cout << "dead \n ";

}
