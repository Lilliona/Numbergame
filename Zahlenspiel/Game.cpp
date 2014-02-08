#include "Game.h"

void Game::set_random()
{
	random=rand()%101;
}

void Game::set_guest()
{
	cout << "Please insert a value between 0 and 100: ";
	cin >> guest;
}

int Game::turn()
{
	set_random();
	cout << "The System has generated a new number." << endl;
	int numberoftries=0;

	do
	{
		set_guest();
		numberoftries=numberoftries+1;
			
		if(guest!=random)
		{	
			if(guest<random)
			{
				cout << "Your number was too low. Try again." << endl << endl;
			}
			else if(guest>random)
			{
				cout << "Your number was too high. Try again. " << endl << endl;
			}
			else{
				cout << "Some mistake has happened" << endl;		
			}
		}
		else
		{
			cout << "You won, congratulations!"<< endl;
		}
	}while(guest!=random);

	return numberoftries;
}

Game::Game(void)
{
}


Game::~Game(void)
{
}


