#pragma once //strg+leer = autoerg�nzung; strg+. = l�sungsvorschlag

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class Game
{
	int random;
	int guest; //variablennamen s. Frank
	int numberoftries;
	void set_random();
	void set_guest();

	void round();
public:
	Game(void);
	~Game(void);

		int turn();
};
