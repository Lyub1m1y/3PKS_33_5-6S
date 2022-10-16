/*"Copyright [2022] <katrinap>"*/
#include <fstream>
#include <iostream>
using namespace std;

class Element {
 public:
  string formula, name;
  double mass;
  int num;
};

int main() {
  int n = 0;
  cout << "How many items do you want to add: ";
  cin >> n;
  Element element[n];
  for (int i = 0; i < n; i++) {
    cout << "------------------------------------" << endl
         << "Enter information about the item:" << endl
         << "1) formula" << endl
         << "2) name" << endl
         << "3) mass" << endl
         << "4) number" << endl
         << "------------------------------------" << endl;

    cin >> element[i].formula;
    cin >> element[i].name;
    cin >> element[i].mass;
    cin >> element[i].num;
    ofstream out("text5.txt", ios::app);
    out << element[i].formula << '\t' << element[i].name << '\t'
        << element[i].mass << '\t' << element[i].num << endl;
    out.close();
  }
  return 0;
}
