/*

Guest.h:

#pragma once

#include <iostream>
using namespace std;

class Guest
{
	int choosenumber;

public:
	Guest(void);
	~Guest(void);
	void set_choosenumber();
	int get_choosenumber();
};




Guest.cpp:

#include "Guest.h"

Guest::Guest(void)
{
}

Guest::~Guest(void)
{
}

void Guest::set_choosenumber()
{
	cout << "Please insert a value between 0 and 100: ";
	cin >> choosenumber;
	if(choosenumber>=0 && choosenumber<=100)
	{}
	else
	{
		while(!(choosenumber>=0  && choosenumber <=100))
		{
			cout << "Insert a number between 0 and 100, your value was invalid!" << endl;
			cin >> choosenumber;
		}
		cout << ""<< endl;
	}
}

int Guest::get_choosenumber()
{
	return choosenumber;
}




























*/