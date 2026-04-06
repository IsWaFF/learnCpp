#include <iostream>
#include <string>

using namespace std;

template <class T> class myarray {
private:
  int len;
  T *arr;

public:
  myarray(T *a, int len) {
    this->len = len;
    arr = new T[len];
    for (int i = 0; i < len; i++) {
      arr[i] = a[i];
    }
  }

  void print() {
    for (int i = 0; i < len; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  void min() {
    T min = arr[0];
    for (int i = 1; i < len; i++) {
      if (arr[i] < min) {
        min = arr[i];
      }
    }
    cout << "Min: " << min << endl;
    cout << endl;
  }

  void max() {
    T max = arr[0];
    for (int i = 1; i < len; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    cout << "Max: " << max << endl;
    cout << endl;
  }

  void sum() {
    T sum = 0;
    for (int i = 0; i < len; i++)
      sum += arr[i];

    cout << "Sum: " << sum << endl;
    cout << endl;
  }

  ~myarray() { delete[] arr; }
};

int main() {
  setlocale(LC_ALL, "RU");

  int a[] = {1, 2, 3, 4, 5};
  myarray<int> arr(a, 5);

  arr.print();
  arr.min();
  arr.max();
  arr.sum();

  return 0;
}