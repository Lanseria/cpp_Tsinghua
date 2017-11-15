#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, i = 0, t1 = 0;
  cin >> n;
  while(n){
    int sub = n % 10;
    n = n / 10;
    t1 += sub*pow(2, i);
    i++;
  }
  cout << t1;
  return 0;
}