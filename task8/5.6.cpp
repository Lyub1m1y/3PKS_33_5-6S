/*"Copyright [2022] <katrinap>"*/
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

class Element {
 public:
  string formula, name;
  double mass;
  int num;
};

int strLength(string temp) {
  int count = 0;
  while (temp[count] != '\0') {
    count++;
  }
  return count;
}

int checkRow(string numConsol, string temp) {
  int tempLength = strLength(temp);
  int numConsolLength = strLength(numConsol);
  int counterTrue = 0;
  int flag = 0;
  for (int i = 0; i < tempLength; i++) {
    if (temp[i] == ' ') {
      for (int j = 0; j < numConsolLength; j++) {
        if (numConsol[j] == temp[i + 1]) {
          counterTrue++;
        }
      }
    }
  }
  if (counterTrue == numConsolLength) {
    flag = 1;
  }
  cout << "tempLength = " << tempLength << endl;
  cout << "numConsolLength = " << numConsolLength << endl;
  cout << "Flag = " << flag << endl;
  return flag;
}

int main() {
  cout << "Enter the number of the item you want to find: ";
  string numConsol;
  cin >> numConsol;
  fstream in("text5.txt");
  string str, temp;
  while (getline(in, temp)) {
    str = temp;
  }
  if (checkRow(numConsol, temp) == 1) {
    cout << temp << endl;
  } else {
    cout << "Nothing found";
  }
  in.close();
  return 0;
}
