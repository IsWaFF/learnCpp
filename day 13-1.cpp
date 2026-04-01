// day 13-1
#include <iostream>
#include <string>

using namespace std;

class player {
private:
  int id;
  string name;
  int score;

public:
  void get_info() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
  }

  void set_info(int ids, string names, int scores) {
    id = ids;
    name = names;
    score = scores;
  }
};
int main() {

  setlocale(LC_ALL, "RU");

  player waff;
  waff.set_info(1, "waff", 100);

  waff.get_info();
}
