#include <iostream>

using namespace std;

bool symm(unsigned int n);

double power (double x, int n);

int main() {
  for (int i = 11; i < 999; i++)
  {
    if(symm(i)&&symm(power(i, 2))&&symm(power(i, 3))){
      cout << i ;
    }
  }
  return 0;
}

bool symm(unsigned int n) {
  unsigned int i = n;
  unsigned int m = 0;
  while(i > 0){
    m = m * 10 + i % 10;
    i /= 10;
  }
  return m == n;
}

double power (double x, int n) {
  double val = 1.0;
  while (n--) {
    val = val * x;
  }
  return val;
}