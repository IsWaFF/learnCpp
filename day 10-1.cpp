// day 10-1
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
    setlocale(LC_ALL, "RU");

    /*ofstream file("test.txt", ios_base::out);
    if (file.is_open()) {
        file << "Wassup bitch"; // создание
        file.close();
    }*/

    ifstream file("test.txt");
    if (file.is_open()) {
        // string temp;
        char temp[100];
        // file >> temp;
        file.getline(temp, 100);
        file.close();
        cout << temp << endl;
    }


    return 0;
}

