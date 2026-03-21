// day 3-1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));


    long ran = 1 + rand() % 20;

    cout << ran << endl;

    cout << time(NULL) << endl;

    return 0;
}
