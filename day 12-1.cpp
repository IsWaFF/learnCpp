// day 12-1
#include <iostream>

using namespace std;

void divide(float a, float b) {
  if (b == 0)
    throw(200);
  else
    cout << (a / b) << endl;
}

int main() {
  setlocale(LC_ALL, "RU");

  float a, b;

  cin >> a;
  cin >> b;

  try {
    divide(a, b);
  } catch (int err) {
    if (err == 200) {
      cout << "2nd num is 0, err!! Retry" << endl;
    }
  }
}
