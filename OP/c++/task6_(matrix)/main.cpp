/*"Copyright [2022] <katrinap>"*/

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int global = 5;

void fillArray(int arr[5][5], int const R, int const C) {
  for (int i = 0; i < R; i++) {
    for (int j = 1; j <= C; j++) {
      arr[i][j] = rand() % 100 + 1;
    }
  }
}

void outArray(int arr[5][5], int const R, int const C) {
  for (int i = 0; i < R; i++) {
    for (int j = 1; j <= C; j++) {
      cout << arr[i][j] << '\t';
    }
    cout << "\n";
  }
}

void max(int arr[5][5], int const R, int const C) {
  int maxValue = 0;
  for (int i = 0; i < R; i++) {
    for (int j = 1; j <= C; j++) {
      if (maxValue < arr[i][j]) {
        maxValue = arr[i][j];
      }
    }
  }
  cout << "Max num matrix: " << maxValue << endl;
  global = maxValue;
}

void min(int arr[5][5], int const R, int const C) {
  int minValue = global;
  for (int i = 0; i < R; i++) {
    for (int j = 1; j <= C; j++) {
      if (minValue > arr[i][j]) {
        minValue = arr[i][j];
      }
    }
  }
  cout << "Min num matrix:  " << minValue << endl;
}

int main() {
  srand(time(NULL));
  int const R = 5;
  int const C = 5;
  int arr[R][C];

  fillArray(arr, R, C);
  outArray(arr, R, C);
  max(arr, R, C);
  min(arr, R, C);
}
