/*"Copyright [2022] <katrinap>"*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
using namespace std;

int randf(int from, int to) { return rand() % to + from; }

int main() {
  const int n = 10;

  ifstream f2("text1.txt");
  int arr[n];
  if (f2.is_open()) {
    for (int i = 0; i < n - 1; i++) {
      f2 >> arr[i];
    }
  }
  f2.close();
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << '\t';
  }
  return 0;
}