// day 3-1 randomizer
#include <iostream>
#include <time.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL)); // что бы выдавало всегда разные

    int min, max, reslt; // обьявление переменных

    cout << "random number (int) \nfrom ";

    cin >> min; // min input

    cout << "to ";

    cin >> max; // max input

    if (min > max){ // minmax logic check
        cout << "iq?" << endl;
        return 500;
    }

    reslt = min + rand() % (max - min + 1); // формула

    cout << "is " << reslt << endl; // result return

    return 0;
}
