#pragma once //strg+leer = autoergänzung; strg+. = lösungsvorschlag

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
	int turn();
	
public:
	Game(void);
	~Game(void);
	void round();
};

