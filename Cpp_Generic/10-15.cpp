#include <iostream>
#include <numeric>
#include <functional>
using namespace std;

int main () {
  int a[] = {1,2,3,4,5};
  const int N = sizeof(a) / sizeof(int);
  cout << "The result by mutipling all elements in A is " << accumulate(a, a + N, 1, multiplies<int>()) << endl;
  return 0;
}
