/*"Copyright [2022] <katrinap>"*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int temp = 0, counter = 0;
  ifstream in1("text1.txt");
  while (in1 >> temp) {
    counter++;
  }
  in1.close();
  ifstream in2("text1.txt");
  int n = counter;
  int* arr = (int*)calloc(n, sizeof(int));
  int max = 0, min = 0;
  for (int i = 0; i < n; i++) {
    in2 >> arr[i];
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  min = max;
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  cout << "Max num: " << max << endl;
  cout << "Min num: " << min << endl;
  in2.close();
  free(arr);
  return 0;
}
