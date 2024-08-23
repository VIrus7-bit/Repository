#include <iostream>

class Calculator
{
private:
    float num1;
    float num2;

public:

    bool set_num1() {
        do
        {
            std::cout << "Введите Num1: ";
            std::cin >> num1;

            if (num1 <= 0)
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (num1 <= 0);

        return 0;
    }

    bool set_num2() {

        do
        {
            std::cout << "Введите Num2: ";
            std::cin >> num2;

            if (num2 <= 0)
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (num2 <= 0);

        return 0;
    }

    double add()          { return (num1 + num2) ;}
    double multiply()     { return (num1 - num2) ;}
    double subtract_1_2() { return (num2 - num1) ;}
    double subtract_2_1() { return (num1 * num2) ;}
    double divide_1_2()   { return (num1 / num2) ;}
    double divide_2_1()   { return (num2 / num1) ;}
};

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true) {
        Calculator Calculator;
        Calculator.set_num1();
        Calculator.set_num2();

        std::cout << "num1 + num2 = " << Calculator.add()  << std::endl;
        std::cout << "num1 - num2 = " << Calculator.multiply() << std::endl;
        std::cout << "num2 - num1 = " << Calculator.subtract_1_2() << std::endl;
        std::cout << "num1 * num2 = " << Calculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << Calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << Calculator.divide_2_1() << std::endl;
    };
}