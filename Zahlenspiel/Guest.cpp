#include "Guest.h"

Guest::Guest(void)
{
}

Guest::~Guest(void)
{
}

void Guest::set_choosenumber()
{

	cout << "Please enter a value between 0 and 100: ";

	string isNumeric;

	while (1)
	{
		getline(cin, isNumeric);

		bool validateNumeric = true;

		for (unsigned i=0; i < isNumeric.length(); i++)
		{
			if (!isdigit(isNumeric[i]))
			{
				validateNumeric = false;
				break;
			}
		}
		if(!validateNumeric)
		{
			cout << "wrong entry. try again: ";
			continue; // Springt zu Schleifenanfang
		}

		stringstream sStream (isNumeric);
		sStream >> choosenumber; 

		if(choosenumber>100)
		{
			cout << "You are over the valid range. Try again: ";
			continue;
		}

		if(choosenumber<0)
		{
			cout << "You are under the valid range. Try again: ";
			continue;
		}
		break;
	}
}

int Guest::get_choosenumber()
{
	return choosenumber;
}