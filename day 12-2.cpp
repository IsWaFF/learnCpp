// day 12-2
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL, "RU");

  string str1 = "wassup ", str2 = "my boy";

  str1.append(str2);
  str1.push_back('!');

  cout << str1 << endl;
  cout << str1.length() << endl;

  cout << str1.find("boy") << endl;
  cout << pow(5, 5) << endl;
  cout << sqrt(25) << endl;
  cout << cbrt(25) << endl;
  cout << ceil(25.5) << endl;
  cout << floor(25.5) << endl;
  cout << round(25.5) << endl;
  cout << abs(-25.5) << endl;
  cout << fmod(25.5, 5) << endl;
}
