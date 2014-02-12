#pragma once

#include <iostream>
#include <string>
#include <sstream>
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

