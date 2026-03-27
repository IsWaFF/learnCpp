// day 8-2 function
#include <iostream>
#include <string>

using namespace std;

float grea1er(float num1, float num2);

float l0wer(float num1, float num2);

int main() {
    setlocale(LC_ALL, "RU");

    float num1,num2;
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;

    cout << "making calculations...." << endl;

    cout << grea1er(num1, num2) << ">" << l0wer(num1, num2) << endl;

    return 0;
}


float grea1er(float num1, float num2) {
    if (num1 > num2) 
        return num1;
    else if (num2 > num1) 
        return num2;
    else 
        return 0.0;
}

float l0wer(float num1, float num2) {
    if (num1 < num2) 
        return num1;
    else if (num2 < num1) 
        return num2;
    else 
        return 0.0;
}
