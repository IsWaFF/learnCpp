// day 8-3 перегрузка функций
#include <iostream>
#include <string>

using namespace std;

void print(int num) {
    cout << num <<endl;
}

void print(string word) {
    cout << word <<endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    print(10);
    print("wassup");

    return 0;
}

