#include <iostream>
#include <string>

using namespace std;

template <typename T> void find_min_max(T *arr, int len) {
  T max = arr[0];
  T min = arr[0];
  for (int i = 1; i < len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
  cout << endl;
}

int main() {
  setlocale(LC_ALL, "RU");

  int ara[] = {1, 4, 5, -10, 123, -432};

  float farr[] = {1.1, -2.2, 3.3, -4.4, 5.5};

  char carr[] = {'a', 'b', 'c', 'd', 'e'};

  find_min_max<int>(ara, 6);
  find_min_max<float>(farr, 5);
  find_min_max<char>(carr, 5);

  return 0;
}