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
				cout <<endl<< "Your number was too low. Try again." << endl;
			}
			else if(guest>random)
			{
				cout <<endl<< "Your number was too high. Try again. " << endl;
			}
			else{
				cout << "Some mistake has happened" << endl;		
			}
		}
		else
		{
			cout << "You won, congratulations!"<< endl<<endl<< "==================================="<<endl<<endl;
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

void Game::round()
{	
	int i;
	for(i=0;i<3;i++)
	{
		turn();
	}
}