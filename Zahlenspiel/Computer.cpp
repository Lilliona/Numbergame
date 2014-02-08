#include "Computer.h"

Computer::Computer(void)
{
}


Computer::~Computer(void)
{
}

void Computer::set_randomnumber()
{
	randomnumber=rand()%101;
}

int Computer::get_randomnumber()
{
	return randomnumber;

}