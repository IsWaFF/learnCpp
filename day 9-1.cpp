// day 9-1 указатели. ссылки
#include <iostream>
#include <string>

using namespace std;

int maxplus(long *arr,long len) {
    long sol =  *arr;
    for (int i = 0; i < len;i++) {
        if (sol>(*arr + i))
            sol = *arr + i;
    
    }
    return sol;
}

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

    cout << maxplus(mas, pos) << endl;

    delete mas;

    return 0;
}

