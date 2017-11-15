#include <iostream>

using namespace std;

int i;
int main () {
  i = 5;
  {
    int i;
    i = 7;
    cout << i << '\n';
  }
  cout << i << '\n';
  return 0;
}