#include "Game.h"
#include <Windows.h>
#include <conio.h> //sleep


void Game::turn()
{
	computer.set_randomnumber();
	cout << computer.get_randomnumber()<<endl;
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
			cout << "That was the correct number!"<< endl;
		}
	}while(guest.get_choosenumber()!=computer.get_randomnumber());
	currenttries=numberoftries;
}

int Game::get_currenttries()
{
	return currenttries;
}

Game::Game(void)
{
}


Game::~Game(void)
{
}

void Game::round()
{	
	int helpingvariable=0;
	double averagevalueindouble;
	int averagevalueinint;
	int usualaverage=3;
	for(int i=0;i<3;i++)
	{
		turn();
		helpingvariable=helpingvariable+get_currenttries();
		cout << "Your number of tries: " << helpingvariable << endl;

		cout << endl << "==================================="<<endl<<endl;
	}
	averagevalueindouble=helpingvariable/3.0;
	averagevalueinint=(int)(averagevalueindouble+0.5);
	cout << "The average value of your count of tries is: " << averagevalueinint << endl;
	
	cout <<endl << "Let's see..."<< endl;
	Sleep(3000);
	if(averagevalueinint<usualaverage)
	{
		cout << "Congratulations, you are better than the average!" << endl;
	}
	else if(averagevalueinint==usualaverage)
	{
		cout << "You are with the average." << endl;
	}
	else
	{
	 cout << "Sorry, you are worse than the average." << endl;
	}
}