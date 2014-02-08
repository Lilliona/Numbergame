#pragma once

#include <stdlib.h>
#include <time.h>

class Computer
{
	int randomnumber;
public:
	Computer(void);
	~Computer(void);
	void set_randomnumber();
	int get_randomnumber();
};

