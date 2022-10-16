/*"Copyright [2022] <katrinap>"*/
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int count = 0;
  char trash;
  char temp;
  ifstream inTrash("text3.txt");
  ifstream in("text3.txt");
  while (inTrash >> trash) {
    in >> temp;
    if (temp == 'z') {
      count++;
    }
  }
  cout << "Number of letters 'z': " << count << endl;
  in.close();
  return 0;
}
