#include "Game.h"



int Game::turn()
{
	computer.set_randomnumber();
	cout << "The System has generated a new number." << endl;
	int numberoftries=0;

	do
	{;
		guest.set_choosenumber();
		numberoftries=numberoftries+1;
			
		if(guest.get_choosenumber()!=computer.get_randomnumber())
		{	
			if(guest.get_choosenumber()<computer.get_randomnumber())
			{
				cout <<endl<< "Your number was too low. Try again." << endl;
			}
			else if(guest.get_choosenumber()>computer.get_randomnumber())
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
	}while(guest.get_choosenumber()!=computer.get_randomnumber());

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