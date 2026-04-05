#include <iostream>
#include <string>

using namespace std;

class player; // Предварительное объявление класса

class enemy {
private:
  int health = 100;

  // Разрешаем классу player обращаться к приватным полям enemy
  friend class player;

public:
};

class player {
private:
  int damage = 20;

public:
  // Переименовали метод из damage в attack, чтобы избежать конфликта имен
  void attack(enemy &target) {
    target.health -= damage;
    cout << "Enemy health: " << target.health << endl;
  }

  void heal(enemy &target) {
    target.health += damage;
    cout << "Enemy health: " << target.health << endl;
  }

  void kill(enemy &target) {
    target.health = 0;
    cout << "Enemy health: " << target.health << endl;
  }
};

int main() {
  setlocale(LC_ALL, "RU");

  enemy skeleton;
  player alex;

  alex.attack(skeleton);
  alex.heal(skeleton);
  alex.kill(skeleton);

  return 0;
}