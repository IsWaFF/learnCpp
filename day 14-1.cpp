// day 13-2
#include <iostream>
#include <string>

using namespace std;

class person;

class car {
private:
  string brand;

public:
  car(string brand) { this->brand = brand; }

  friend void get_info(car &car, person &person);
};

class person {
private:
  string name;
  int age;

public:
  person(string name, int age) {
    this->name = name;
    this->age = age;
  }

  friend void get_info(car &car, person &person);
};

void get_info(car &car, person &person) {
  cout << "Name: " << person.name << endl;
  cout << "Age: " << person.age << endl;
  cout << "Brand: " << car.brand << endl;
}

int main() {

  setlocale(LC_ALL, "RU");

  car car("BMW");
  person person("John", 25);

  get_info(car, person);

  return 0;
}
