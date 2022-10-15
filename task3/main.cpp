/*"Copyright [2022] <katrinap>"*/
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 7;
    int arr[] = {60, 40, 50, 0, 24, 0, 37}; 
    double hour = 60;
    
    for (int i = 0; i < n; i++) {
        try {
            cout <<"В " << i + 1 << " час";
            if (arr[i] == 0) {
              throw "чел станок забил болт и в этот час как бы не работал :(";
            }
          cout << "\n";
        int temp = arr[i];
            cout << "на изготовление " << arr[i] << " деталей потрачено " << (double) (hour/temp) << " минут" << "\n" << "\n";
        }
        catch(const char aMessage[]) {
          cout << endl << aMessage << endl << "\n";
          }
    }
    return 0;
}