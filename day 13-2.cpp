// day 13-2
#include <iostream>
#include <string>

using namespace std;

class player {
private:
  int id; // for this->id
  string name;
  int score;

public:
  player(int ids, string names, int scores) { set_info(id, name, score); }

  player() {}

  void get_info() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
  }

  void set_info(int id, string name, int score) {
    this->id = id; // this-> means current object in class
    this->name = name;
    this->score = score;
  }

  ~player() { cout << "Destructor" << endl; }
};
int main() {

  setlocale(LC_ALL, "RU");

  player waff(1, "waff", 100);

  waff.get_info();
}
