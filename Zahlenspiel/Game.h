#pragma once //strg+leer = autoerg�nzung; strg+. = l�sungsvorschlag
#include "Guest.h"

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class Game
{
	int random;
	Guest guest; //variablennamen s. Frank
	int numberoftries;
	void set_random();
	
	int turn();
	
public:
	Game(void);
	~Game(void);
	void round();
};

