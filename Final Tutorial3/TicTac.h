/*
TicTac Toe Game
Class declaration
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

#ifndef TICTAC_H
#define TICTAC_H

class TicTac
{
private:
	char board[3][3];
	bool move(int, int);

public:
	TicTac();
	void gmInstruct();
	void disBoard();
	void player1(int);
	void player2(int);
	bool checkWin();
	bool checkDraw();
	void RESTART();
};

#endif