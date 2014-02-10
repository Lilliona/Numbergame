#pragma once

#include <iostream>
using namespace std;

class Guest
{
	char choosenumber;

public:
	Guest(void);
	~Guest(void);
	void set_choosenumber();
	int get_choosenumber();
};

