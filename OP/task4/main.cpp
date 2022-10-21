/*"Copyright [2022] <katrinap>"*/

#include <cmath>
#include <iostream>
using namespace std;

int resSqrt(int num) {
  float checkNum = 0;
  checkNum = sqrt(num);
  if (checkNum == int(checkNum))
    cout << num << " это квадрат числа " << checkNum << endl;
  else
    cout << num << " не является квадратом" << endl;
  return num;
}

long resSqrt(float* num) {
  float checkNum = 0;
  float temp = *num;
  checkNum = sqrt(temp);
  if (checkNum == int(checkNum))
    cout << temp << " это квадрат числа " << checkNum << endl;
  else
    cout << temp << " не является квадратом" << endl;
  return temp;
}

void resSqrt(float num, int n) { resSqrt(num); }

int main() {
  cout << "Num1: = "
       << "Num2: = "
       << "Num3: = ";
  float num1 = 0;
  float num2 = 0;
  float num3 = 0;
  cin >> num1 >> num2 >> num3;
  resSqrt(num1);
  resSqrt(&num2);
  int n = 0;
  resSqrt(num3, n);
  return 0;
}
