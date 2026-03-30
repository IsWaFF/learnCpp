// day 11-1
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Pos {
    int x,y;
    void get_pos() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

struct Car {
    string name;
    int speed;
    bool ignition;
    float engine_size;
    Pos pos;
    void get_name() {
        cout << "Name: " << name << endl;
        cout << "Speed: " << speed << endl;
        cout << "Ignition status: " << ignition << endl;
        cout << "Engine size: " << engine_size << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Car mazerati;

    mazerati.name = "Mazerati";
    mazerati.speed = 289;
    mazerati.ignition = true;
    mazerati.engine_size = 2.9;


    Car BMW;

    BMW.name = "M5";
    BMW.speed = 234;
    BMW.ignition = false;
    BMW.engine_size = 2.2;


//  poses

    mazerati.pos.x = 10;
    mazerati.pos.y = -50;

    BMW.pos.x = 10;
    BMW.pos.y = -20;
     

    mazerati.get_name();

    mazerati.pos.get_pos();
    cout << endl;

    BMW.get_name();
    BMW.pos.get_pos();
    return 0;
}

