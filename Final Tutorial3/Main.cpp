/*
TicTac Toe Game
Main prgrame testing TicTac Class
*/

#include <iostream>
#include <stdlib.h>
#include <string>

#include "TicTac.h"

using namespace std;

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
		// Player One
		cout << endl << " " << plyr1 << " your Turn (X): "; cin >> p; toe.player1(p);
		cout << " ----------------------------" << endl;

		if (toe.checkWin() == true) { cout << " " << plyr1 << " WIN!" << endl; toe.disBoard(); cout << endl << endl; break; }
		else if (toe.checkDraw() == true) { cout << " Draw!" << endl; toe.disBoard(); cout << endl << endl; break; }

		toe.disBoard();
		cout << endl << " ----------------------------" << endl;

		// Player Two
		cout << " " << plyr2 << " your Turn (O): "; cin >> p; toe.player2(p);
		cout << " ----------------------------" << endl;

		if (toe.checkWin() == true) { cout << " " << plyr2 << " WIN!" << endl; toe.disBoard(); cout << endl << endl; break; }
		else if (toe.checkDraw() == true) { cout << " Draw!" << endl; toe.disBoard(); cout << endl << endl; break; }

		toe.disBoard();
		cout << endl << " ----------------------------";
	}
}
	  int choice;
	  cout << " ============================" << endl;
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