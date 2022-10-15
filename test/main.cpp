#include <cmath>
#include <iostream>
using namespace std;

double pen(float a) {
  float a1 = 0;
  a1 = sqrt(a);
  if (a1 == int(a1)) {
    cout << a << " это квадрат числа " << a1 << '\n';
  } else {
    cout << a << " не является квадратом" << '\n';
  }
  return 0;
}

float pen(float* pb) {
  float b1 = 0;
  b1 = sqrt(*pb);
  if (b1 == int(b1)) {
    cout << *pb << " это квадрат числа " << b1 << '\n';
  } else {
    cout << *pb << " не является квадратом" << '\n';
  }
  *pb = 228;
  return 0;
}

void pen(float c, int d) { pen(c); }

int main() {
  cout << "Число_1: = "
       << "Число_2: = "
       << "Число_3: = ";
  float a = 0;
  float b = 0;
  float c = 0;
  cin >> a >> b >> c;
  pen(a);
  pen(&b);
  int d = 0;
  pen(c, d);
  cout << b;
  return 0;
}