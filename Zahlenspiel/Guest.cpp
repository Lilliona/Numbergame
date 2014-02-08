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
}

int Guest::get_choosenumber()
{
	return choosenumber;
}