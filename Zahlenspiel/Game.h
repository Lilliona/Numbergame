#pragma once //strg+leer = autoerg�nzung; strg+. = l�sungsvorschlag
#include "Guest.h"
#include "Computer.h"


#include <iostream>

using namespace std;

class Game
{
	Computer computer;
	Guest guest; //variablennamen s. Frank
	int currenttries;
	int get_currenttries();
	void turn();
	void averagevalue();
	
public:
	Game(void);
	~Game(void);
	void round();
};

