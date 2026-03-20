// day 2-2
#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int inp;
    std::cout << "введите число: ";
    std::cin >> inp;

    if (inp == 0)
        std::cout << "ноль" << std::endl;
    else if  (inp > 0) {
        std::cout << "+" << std::endl;
        if (inp % 2 == 0) 
            std::cout << "Четное" << std::endl;
        else 
            std::cout << "Нечетное" << std::endl;
        }
    else if (inp < 0)
        std::cout << "-" << std::endl;

    return 0;
}
