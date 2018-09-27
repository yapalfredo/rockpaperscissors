//originally tictactoe
//but converted to RockPaperScissors

#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

class Game
{
private:
	string move[3] = { "rock", "paper", "scissors" };
	int a, b;
public:
	Game() 
	{
		// constructor
	}

	~Game()
	{
		// destructor
	}

	string getMove(int i)
	{
		return move[i];
	}

	int getA() 
	{
		return a;
	}

	int getB()
	{
		return b;
	}

	void setA(int a)
	{
		this->a = a;
	}

	void setB(int b)
	{
		this->b = b;
	}

	void LoadGame()
	{
		int a, b;

		// generate random numbers for a and b
		for (int i = 0; i < 2; i++)
		{
			if (i==0)
			{
				setA(rand() % (0 + 2));
			}
			else
			{
				setB(rand() % (0 + 2));
			}
		}

		if (getA() > getB())
		{
			cout << getMove(getA()) << " beats " << getMove(getB()) << endl << endl;
		}
		else if (getA() < getB())
		{
			cout << getMove(getB()) << " beats " << getMove(getA()) << endl << endl;
		}
		else
		{
			cout << getMove(getA()) << " is equal with " << getMove(getB()) << endl << endl;
		}  
	}
};
