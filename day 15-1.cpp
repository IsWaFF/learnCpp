#include <iostream>
#include <string>

using namespace std;

class hero {
protected:
  string name;
  int health;
  int basedamage;

public:
  hero(string name, int health, int basedamage) {
    this->name = name;
    this->health = health;
    this->basedamage = basedamage;
  }

  void getinfo() {
    cout << "Name: " << name << " Health: " << health
         << " Base Damage: " << basedamage << endl;
  }
};

class strength_hero : public hero {
protected:
  int armor;

public:
  strength_hero(string name, int health, int basedamage, int armor)
      : hero(name, health, basedamage) {
    this->armor = armor;
  }

  void getinfo() {
    hero::getinfo();
    cout << "Armor: " << armor << endl;
  }
};

class agility_hero : public hero {
protected:
  float attack_speed;

public:
  agility_hero(string name, int health, int basedamage, float attack_speed)
      : hero(name, health, basedamage) {
    this->attack_speed = attack_speed;
  }

  void getinfo() {
    hero::getinfo();
    cout << "Attack Speed: " << attack_speed << endl;
  }
};

int main() {
  setlocale(LC_ALL, "RU");

  strength_hero axe("Axe", 700, 50, 5);
  agility_hero antimage("Anti-Mage", 500, 40, 1.5);

  axe.getinfo();
  antimage.getinfo();

  return 0;
}