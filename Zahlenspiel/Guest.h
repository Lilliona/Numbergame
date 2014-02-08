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

