// day 11-2
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum State {
    liquid,
    vapor,
    solid,
    plasma
};

struct object {
    State state;
    string name;
    float weight;
};

int main() {
    setlocale(LC_ALL, "RU");

    object rock;
    rock.name = "Rock";
    rock.weight = 10.55;
    rock.state = State::solid;

    cout << rock.state;D
   
    return 0;
}

