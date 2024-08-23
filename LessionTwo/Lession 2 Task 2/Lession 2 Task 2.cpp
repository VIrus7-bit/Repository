#include <iostream>
#include <string>

class Counter
{
private:
    int  a = 0;

public:

    Counter(int set_a) : a{ set_a }
    {}

    int increase(char set_a) {
           set_a = set_a++;
        return set_a;
    }
    int decrease(char set_a) {
            set_a--;
        return set_a;
    }
    int count(char set_a) {
            std::cout << a << std::endl;
        return set_a;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int  a{};
    char s;

    Counter set{ a };

    std::string ptr1 = "да";
    std::string ptr2;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> ptr2;

    if (ptr1 == ptr2) {

        std::cout << "Введите начальное значения счётчика: ";
        std::cin >> a;
    }
    else {
        a = 1;
    }

    do {

        std::cout << "Введите команду ('+' , '-' , '=' или 'x'): ";
        std::cin >> s;

        switch (s)
        {
        case '+': { set.increase(a); } break;
        case '-': { set.decrease(a); } break;
        case '=': { set.count   (a); } break;
        }

    } while (s != 'x'); std::cout << "Досвидания!";
    
}
