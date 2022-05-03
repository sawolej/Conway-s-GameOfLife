# Conway-s-GameOfLife
cellular automaton with simple visualization in API

ADMISSION

The 'Game Of Life' app is an interpretation of the British mathematician John Conway's 'Game of Life' mobile slot machine. The game works by displaying a board filled with cells. Cells initiated as living are highlighted on the board. Then, the location of each cell and the state of its neighbors are analyzed. If the assumed conditions are met, the given cell changes its state to the opposite, and the screen updates and displays the current state of all cells. The game has a lot of possible variations and rarely ends with the death of the entire population - more often it regales us with the sight of simple oscillators or unchanging forms.

GAME RULES

A dead cell with exactly three neighbors revives on the next turn. A living cell surrounded by two or three neighbors remains alive, in the case of a different number of living cells surrounding it, it is considered dead (from loneliness or overpopulation).

USE

The game takes input in the form of right / left clicks. Pressing the right mouse button triggers the next game turn, and the left mouse button closes it. The application receives the command to execute the next round by analyzing the location of cells and modifies them accordingly, and then displays the new location.
