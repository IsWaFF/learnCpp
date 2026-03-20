// day 1-2
#include <iostream>

int main() {

    setlocale(LC_ALL, "RU");

    int age;
    float height;
    char first_letter;
    bool sub;

    std::cout << "введите возраст: ";
    std::cin >> age;

    std::cout << "введите высоту: ";
    std::cin >> height;

    std::cout << "введите первую букву имени: ";
    std::cin >> first_letter;

    std::cout << "введите статус сабки на скит: ";
    std::cin >> sub;

    std::cout << " - " << age << std::endl;
    std::cout << " - " << height << std::endl;
    std::cout << " - " << first_letter << std::endl;
    std::cout << " - " << sub << std::endl;

    return 0;
    
}
