#include <iostream>
#include <string>

struct user
{
	long long int Number;
	std::string	  name;
	float balans;
	float new_balans;
};

int newBalans(user& balans, user& new_balans);

int main()
{
	setlocale(LC_ALL, "Russian");
	
	user name_Andrey;
	float a;
	std::cout << " Введите номер счёта: ";
	std::cin  >> name_Andrey.Number;

	std::cout << " Введите имя владельца: ";
	std::cin  >> name_Andrey.name;

	std::cout << " Введите баланс: ";
	std::cin  >> name_Andrey.balans;

	std::cout << " Введите новый баланс: ";
	std::cin  >> name_Andrey.new_balans;

	newBalans();

	std::cout << " Ваш счёт: " << name_Andrey.name << " , " << name_Andrey.Number << " , " << name_Andrey.balans << std::endl << std::endl;

	system("pause");
}


int newBalans( user& balans, user& new_balans)
{
	balans = new_balans;
	return 0;
}
