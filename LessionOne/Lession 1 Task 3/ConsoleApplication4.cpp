#include <iostream>

struct addres
{
	std::string gorod;
	std::string ulica;
	int home;
	int nome2;
	int indecs;
};


void structura(addres);

int main()
{
	setlocale(LC_ALL, "Russian");

	addres one;

	structura(one);

}

void structura(addres)
{
	addres one;

	std::cout << "Город: ";
	std::cin >> one.gorod;

	std::cout << "Улитца: ";
	std::cin >> one.ulica;

	std::cout << "Номер дома: ";
	std::cin >> one.home;

	std::cout << "Номер квартиры: ";
	std::cin >> one.nome2;

	std::cout << "Идекс: ";
	std::cin >> one.indecs;
}