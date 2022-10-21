/*"Copyright [2022] <katrinap>"*/
#include <cmath>
#include <iostream>

using namespace std;

class piramida {
 public:
  int a;
  int l;
  int h;
};

int fS(int a, int h) {
  int result = 2 * a * h;
  return result;
}

int fV(int h, int resS) {
  int result = 0.33 * resS * h;
  return result;
}

int main() {
  piramida pir1;
  cout << "Enter\n a: \n l: \n h: \n";
  cin >> pir1.a >> pir1.l >> pir1.h;
  int resS = fS(pir1.a, pir1.h);
  int resV = fV(pir1.h, resS);
  cout << "Result Volume: " << resV << '\n';
  cout << "Result Square_Bokovoi: " << resS << '\n';
  cout << "Result Square_Osnovanie: " << resS << '\n';
  return 0;
}