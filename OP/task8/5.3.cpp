/*"Copyright [2022] <katrinap>"*/
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int n = 100;
  ofstream out("text3.txt");
  for (int i = 0; i < n; i++) {
    char temp = (rand() % 26 + 'a');
    out << temp;
  }
  out.close();
  return 0;
}
