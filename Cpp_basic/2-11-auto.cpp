#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  auto val = 2;
  double i;
  decltype(i) j = 2;
  cout << val << j;
  return 0;
}