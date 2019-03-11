#include <iostream>

int main()
{
	std::cout << "Enter a positive integer: ";
	int value{};
	std::cin >> value;

	if (value >= 0)
	{
		if ((value % 2) == 0)
		{
			std::cout << value << " is positive and even!" << std::endl;
		}
		else
		{
			std::cout << value << " is positive and odd!" << std::endl;
		}
	}
	else
	{
		std::cout << value << " is not positive..." << std::endl;
	}

	return 0;
}

/* This program displays the use of nested blocks using the if statement.  If you find yourself needing
more than 3-4 levels of nested blocks, look into creating separate functions for your main function */