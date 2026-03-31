// day 2-1 calc
#include <iostream>

int main() {
  setlocale(LC_ALL, "RU");

  float num1, num2;
  char ss;

  std::cout << "Число 1: ";
  std::cin >> num1;

  std::cout << "Знак: ";
  std::cin >> ss;

  std::cout << "Число 2: ";
  std::cin >> num2;

  float answer;

  switch (ss) {
  case '+':
    answer = num1 + num2;
    std::cout << num1 << ss << num2 << "=" << answer << std::endl;
    break;

  case '-':
    answer = num1 - num2;
    std::cout << num1 << ss << num2 << "=" << answer << std::endl;
    break;

  case '/':
    if (num2 == 0) {
      std::cout << "Вы далбаеб !" << std::endl;
      break;
    }
    answer = num1 / num2;
    std::cout << num1 << ss << num2 << "=" << answer << std::endl;
    break;

  case '*':
    answer = num1 * num2;
    std::cout << num1 << ss << num2 << "=" << answer << std::endl;
    break;
  }

  return 0;
}
