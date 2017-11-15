#include <iostream>

using namespace std;

double power(int x, int n){
  double pow = 1.0;
  while(n--){
    pow = pow * x;
  }
  return pow;
}

int main() {
  double pow;
  pow = power(5, 2);
  cout << pow << endl;
  return 0;
}