//==============================================================
// Class App
// Engine of Game of Life.
//==============================================================


#pragma once

#ifndef APP_H
#define APP_H

class App
{
protected:
    int** arr1;
    int** arr2;
    int x, y;
    App();
    virtual ~App();
public:
    App(const App& co);
    App& operator= (const App& co);
    void makeBoard(); // creates boards
    void getxy(int x, int y);
    void play(); //starts the game and analyzes the state of the cells
    virtual void view(int, int) = 0;
};
#endif
