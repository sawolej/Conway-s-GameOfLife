//==============================================================
// Class AppG
// Inherits from the App class. Allows to display the game flow in graphic form.
//==============================================================
#pragma once
#ifndef APPG_H
#define APPG_H
#include "app.h"


class AppG : public App
{
protected:
    //array
public:
    AppG(int px, int py);
    ~AppG();
    AppG(const AppG& co);
    AppG& operator= (const AppG& co);
    void view(int, int); //display the game flow in graphic form
private:

};
#endif
