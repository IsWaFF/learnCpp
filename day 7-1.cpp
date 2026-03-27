// day 7-1 masives
#include <iostream>
#include <time.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    long pos, el;


    cout << "позиций в массиве:";
    cin >> pos;
    while (pos <= 0) {
        cout << "iq? reenter(>0):";
        cin >> pos;
    }

    long *mas = new long[pos]; // dum mem

    for (long i = 0; i < pos; i++) {
        
        cout << i << " элемент = ";
        cin >> el;
        mas[i] = el;
    }
    for (long i = 0; i < pos; i++) {
        
        cout << i << " элемент - " << mas[i] << endl;
    }

    delete mas;

    return 0;
}
