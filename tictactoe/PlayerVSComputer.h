#pragma once
#include "Game.h"

class PlayerVSComputer
{
private:
	Game newGame;
public:
	PlayerVSComputer()
	{
		//constructor
	}
	~PlayerVSComputer()
	{
		//destructor
	}

	bool playWithComputer()
	{
		int result;

		char ans = 'n';

		do {
			cout << "Do you want to play against the computer? y/n (Y/N) ";

			if (ans == 'Y' || ans == 'y')
			{
				//load
			}
			else
			{
				break;
				exit(0);
			}


		} while (ans == 'y' || ans == 'Y');
	}
};