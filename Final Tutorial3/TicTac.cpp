/*
TicTac Toe Game
Class members definitions

*/

#include "TicTac.h"


// Constructor
TicTac::TicTac()
{
	/*
		This block initialises the array board
	*/

	board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
	board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
	board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';

}
// Game rules and instructions
void TicTac::gmInstruct()
{
	/*
		These are instruction of the game
	*/
	cout << " =-=-=-=-| Welcome to TicTac Toe Game! |-=-=-=-=" << endl << endl;
	cout << " RULES of the game:" << endl;
	cout << " Players try as much as possible to match your" << endl;
	cout << " three respective markers in the same row, column" << endl;
	cout << " or diagonal. And the player to do that first will" << endl;
	cout << " be a WINNER. If either players fail to match their" << endl;
	cout << " respective markers until the spaces are all filled." << endl;
	cout << " A DRAW it will be." << endl << endl;
	cout << " INSTRUCTIONS" << endl;
	cout << " Each block/space is assigned a number (shown below)." << endl;
	cout << " Press the number to place your marker to and Press" << endl;
	cout << " ENTER button. " << endl << endl;
	cout << " Play smart, Goodluck!!" << endl << endl;
	cout << endl << " The board is numbered as follows." << endl;
	disBoard();

}
// Display the board
void TicTac::disBoard()
{
	/*
		This Block display updated array( Current Move )
	*/
	cout << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
	cout << "    -----+-----+-----" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
	cout << "    -----+-----+-----" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
}

// Check Wins
bool TicTac::checkWin()
{
	/*
		This Block Check if there is a win, if there is it returns true
	*/
	if (board[0][0] == board[0][1] && board[0][0] == board[0][2]) { return true; }			// row1
	else if (board[1][0] == board[1][1] && board[1][0] == board[1][2]) { return true; }		// row2
	else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]) { return true; }		// row3
	else if (board[0][0] == board[1][0] && board[0][0] == board[2][0]) { return true; }		// column1
	else if (board[0][1] == board[1][1] && board[0][1] == board[2][1]) { return true; }		// column2
	else if (board[0][2] == board[1][2] && board[0][2] == board[2][2]) { return true; }		// column3
	else if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) { return true; }		// right left diagonal
	else if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) { return true; }		// left right diagonal
	else { return false; }

}

// Check if Draw
bool TicTac::checkDraw()
{
	/*
		Checking of the draw at a last move
	*/
	int drw = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 'X' || board[i][j] == 'O') { drw += 1; }
		}
	}

	if (drw == 9) { return true; }
	else { return false; }
}

// Resetting the board
void TicTac::RESTART()
{
	/*
		Resert the board, for New Game
	*/
	board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
	board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
	board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';
}

// Player one's Moves
void TicTac::player1(int pos)
{
	if (checkWin() != true)
	{
		switch (pos)
		{
		case 1:{
			if (move(0, 0) == true) { board[0][0] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 2:{
			if (move(0, 1) == true) { board[0][1] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 3:{
			if (move(0, 2) == true) { board[0][2] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 4:{
			if (move(1, 0) == true) { board[1][0] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 5:{
			if (move(1, 1) == true) { board[1][1] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 6:{
			if (move(1, 2) == true) { board[1][2] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 7:{
			if (move(2, 0) == true) { board[2][0] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 8:{
			if (move(2, 1) == true) { board[2][1] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		case 9:{
			if (move(2, 2) == true) { board[2][2] = 'X'; }
			else { player1(SecondChnc()); }
			break;
		}
		default:{
			player1(SecondChnc()); break;
		}
		}
	}
}

// Player Two's Move
void TicTac::player2(int pos)
{

	if (checkWin() != true)
	{
		switch (pos)
		{
		case 1:{
			if (move(0, 0) == true) { board[0][0] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 2:{
			if (move(0, 1) == true) { board[0][1] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 3:{
			if (move(0, 2) == true) { board[0][2] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 4:{
			if (move(1, 0) == true) { board[1][0] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 5:{
			if (move(1, 1) == true) { board[1][1] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 6:{
			if (move(1, 2) == true) { board[1][2] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 7:{
			if (move(2, 0) == true) { board[2][0] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 8:{
			if (move(2, 1) == true) { board[2][1] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		case 9:{
			if (move(2, 2) == true) { board[2][2] = 'O'; }
			else { player2(SecondChnc()); }
			break;
		}
		default:{
			player1(SecondChnc()); break;
		}
		}
	}
}

// Moving to Valid Position
bool TicTac::move(int row, int col)
{
	if (board[row][col] == 'X' || board[row][col] == 'O') { return false; }
	else { return true; }
}

// Second Play Attempt
int TicTac:: SecondChnc()
{
	int ScndChnc; 


	cout << " Invalid Play!! Try Again : ";

	cin.clear();
	cin.ignore(1000, '\n');

	cin >> ScndChnc;
	
	return ScndChnc;
	
}