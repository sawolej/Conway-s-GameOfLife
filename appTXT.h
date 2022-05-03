//==============================================================
// Class AppTXT
// Inherits from the App class. Allows to display the game flow in text form.
//==============================================================
#pragma once
#ifndef APPTXT_H
#define APPTXT_H
#include "app.h"

class AppTXT : public App
{
protected:
    //array
public:
    AppTXT(int px, int py);
    ~AppTXT();
    AppTXT(const AppTXT& co);
    AppTXT& operator= (const AppTXT& co);
    void view(int, int); //display the game flow in text form
};
#endif
