/*"Copyright [2022] <katrinap>"*/
#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

class Element {
 public:
  string name;
  int num = 0;  //количество
  int cost = 0;
};

int fillingElements() {  // 5.7 a)
  int n = 0;
  cout << "How many items do you want to add: ";
  cin >> n;
  Element element[n];
  for (int i = 0; i < n; i++) {
    cout << "------------------------------------" << endl
         << "Enter information about the item:" << endl
         << "1) name" << endl
         << "2) num" << endl
         << "3) cost" << endl
         << "------------------------------------" << endl;
    cin >> element[i].name;
    cin >> element[i].num;
    cin >> element[i].cost;
    ofstream out("text7.txt", ios::app);
    out << element[i].name << '\t' << element[i].num << '\t' << element[i].cost
        << endl;
    out.close();
  }
  return 0;
}

int main() {
  int n = 0;
  cout << "Choose which subroutine from 1 - 5 to run?" << endl;
  cin >> n;
  if (n == 1) {
    fillingElements();
    // } else if (n == 2) {
    //   fillingElements();
    // } else if (n == 3) {
    //   fillingElements();
    // } else if (n == 4) {
    //   fillingElements();
    // } else if (n == 5) {
    //   fillingElements();
  } else {
    cout << "God, man, you can't choose exactly from 1 to 5 :(" << endl;
  }
  return 0;
}

// int strLength(string temp) {
//   int count = 0;
//   while (temp[count] != '\0') {
//     count++;
//   }
//   return count;
// }

// int checkRow(string numConsol, string temp, int* sum) {
//   int tempLength = strLength(temp);
//   int numConsolLength = strLength(numConsol);
//   int counterTrue = 0;
//   int flag = 0;
//   int flagForSum = 0;
//   int flagForExitJ0 = 0;
//   string tempStringInt[10];
//   for (int i = 0, j = 0; i < tempLength; i++, j++) {
//     if (temp[i] == '\t') {
//       if (flagForSum != 2) {
//         flagForSum++;
//       } else if (flagForExitJ0 == 0) {
//         j = 0;
//         flagForExitJ0++;
//       }
//     }
//     if (flagForSum == 2) {
//       if (temp[i] != '\0') {
//         tempStringInt[j] = temp[i];
//       } else {
//         flag = 1;
//       }
//     }
//     if (flag == 1) {
//       *sum = atoi(&tempStringInt);
//       flag = 0;
//     }
//   }
//   return flag;
// }
