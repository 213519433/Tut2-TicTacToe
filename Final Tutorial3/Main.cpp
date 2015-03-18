/*
TicTac Toe Game
Main prgrame testing TicTac Class
*/

#include <iostream>
#include <stdlib.h>
#include <string>

#include "TicTac.h"

using namespace std;

void play(bool, bool, string);

int main()
{
	int p;

	TicTac toe;
	toe.gmInstruct(); cout << endl;
	system("pause");

start:{
	string plyr1, plyr2;

	cout << "\n ============================" << endl << endl;
	cout << "      Let The Game Bigin" << endl;
	cout << " ----------------------------" << endl;

	cout << " First player name: "; cin >> plyr1;
	cout << " Second player name: "; cin >> plyr2;
	cout << endl << " ----------------------------";

	while (1)
	{
		// Player One Turn
		cout << endl << " " << plyr1 << " your Turn (X): ";

		p = 13;
		cin >> p;

			toe.player1(p);
			cout << " ----------------------------" << endl;
			/*
				If there is a win or draw Break out of the loop
				*/
			if (toe.checkWin() == true || toe.checkDraw() == true) {
				play(toe.checkWin(), toe.checkDraw(), plyr1); toe.disBoard(); break;
			}

			toe.disBoard();
			cout << endl << " ----------------------------" << endl;

			// Player Two Turn
			cout << " " << plyr2 << " your Turn (O): "; cin >> p; toe.player2(p);
			cout << " ----------------------------" << endl;
			/*
			If there is a win or draw Break out of the loop
			*/
			if (toe.checkWin() == true || toe.checkDraw() == true){
				play(toe.checkWin(), toe.checkDraw(), plyr2); toe.disBoard(); break;
			}

			toe.disBoard();
			cout << endl << " ----------------------------";
	
	}
}

	  /*
		Options for New Game or Exiting the Game
	  */
	  int choice;
	  cout << endl << " ============================" << endl;
	  cout << " 1. New game." << endl << " 2. Exit." << endl << " > ";

  nwGmOrExt:{

	  cin >> choice;

	  switch (choice)
	  {
	  case 1:{
		  toe.RESTART();
		  cout << " ----------------------------";
		  toe.disBoard();
		  goto start;
		  break;
	  }
	  case 2:{
		  break;
	  }
	  default:{
		  cout << " Invalid option. Please try again." << endl;
		  goto nwGmOrExt;
	  }
	  }
  }

			cout << endl << " ============================" << endl << endl;
			system("pause");
			return 0;
}

void play(bool Win, bool Draw, string Name)
{
	/*
		Returns a win (Winner) or draw
	*/
	if (Win == true) { cout << " " << Name << " WIN!" << endl; }
	else if (Draw == true) { cout << " Draw!" << endl; }
}