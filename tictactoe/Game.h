//originally tictactoe
//but converted to RockPaperScissors
//this class is for computer vs computer

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

	void generateNumber() 
	{
		srand(time(NULL));
		// generate random numbers for a and b
		for (int i = 0; i < 2; i++)
		{
			if (i == 0)
			{
				setA(rand() % (0 + 3));
			}
			else
			{
				setB(rand() % (0 + 3));
			}
		}
	}

	void LoadGame()
	{
		cout << "Computer vs Computer" << endl << endl;
		
		//start to generate number;
		generateNumber();

		cout << "Computer A got '" << getMove(getA()) << "' and Computer B got '" << getMove(getB())<< "'" << endl;

		if (getA() > getB())
		{
			cout << getMove(getA()) << " beats " << getMove(getB()) << endl;
			cout << "Computer A won!" << endl;
		}
		else if (getA() < getB())
		{
			cout << getMove(getB()) << " beats " << getMove(getA()) << endl;
			cout << "Computer B won!" << endl;
		}
		else
		{
			cout << getMove(getA()) << " is equal with " << getMove(getB()) << endl;
			cout << "It's a tie!" << endl;
		}  
	}
};
