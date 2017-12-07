// 基于范围的For循环

#include <iostream>
using namespace std;

// int main () {
//   int array[3] = {1,2,3};
//   int *p;
//   for (p = array; p < array + sizeof(array)/sizeof(int); ++p)
//   {
//     *p += 2;
//     cout << *p << endl;
//   }
//   return 0;
// }

// 在容器类时更有用
int main () {
  int array[3] = {1,2,3};
  for (int & e : array)
  {
    e += 2;
    cout << e << endl;
  }
  return 0;
}
