// day 8-1 string
#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string lane = "Введите строку";

    cout << lane << endl;
    
    getline(cin, lane);

    cout << lane << endl;


    return 0;
}
