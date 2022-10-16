/*"Copyright [2022] <katrinap>"*/
#include <ctime>
#include <fstream>
#include <iostream>

#include "windows.h"

using namespace std;

int randf(int from, int to) { return rand() % to + from; }

int main() {
  srand(time(NULL));
  ofstream out;
  out.open("text1.txt");
  const int n = 10;
  int arr[n];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = randf(1, 100);
    out << arr[i] << "\t";
  }
  out.close();
  return 0;
}
