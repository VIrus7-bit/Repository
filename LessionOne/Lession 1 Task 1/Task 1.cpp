#include <iostream>

enum season
{
	January = 1, February, March, April, May, June, July, August, September, October, November, December 
};

int main()
{
	setlocale(LC_ALL, "Russian"); int season;

	do
	{

		std::cout << " Enter the month number: ";
		std::cin >> season;

		switch (season)
		{

		case season::January:
			std::cout << " January";
			std::cout << std::endl;
			break;

		case season::February:
			std::cout << " February";
			std::cout << std::endl;
			break;

		case season::March:
			std::cout << " March";
			std::cout << std::endl;
			break;

		case season::April:
			std::cout << " April";
			std::cout << std::endl;
			break;

		case season::May:
			std::cout << " May";
			std::cout << std::endl;
			break;

		case season::June:
			std::cout << " June";
			std::cout << std::endl;
			break;

		case season::July:
			std::cout << " July";
			std::cout << std::endl;
			break;

		case season::August:
			std::cout << " August";
			std::cout << std::endl;
			break;

		case season::September:
			std::cout << " September";
			std::cout << std::endl;
			break;

		case season::October:
			std::cout << " October";
			std::cout << std::endl;
			break;

		case season::November:
			std::cout << " November";
			std::cout << std::endl;
			break;

		case season::December:
			std::cout << " December";
			std::cout << std::endl;
			break;

		case 0:
			std::cout << " Goodbye";
			std::cout << std::endl;

		default:
			if (season == 0)
				continue;
			std::cout << " Wrong number!";
			std::cout << std::endl;
			break;

		}
	} while (season != 0);

	system("pause");

}