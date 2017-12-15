/*
#include<iostream>
using namespace std;
// 冗余代码
int abs (int x) {
  return x < 0 ? -x : x;
}

double abs (double x) {
  return x < 0 ? -x : x;
}
// 函数模板
template<typename T>
T abs (T x) {
  return x < 0 ? -x : x;
}

int main () {
  int a = -2323;
  double b = -2.34324;
  cout << abs(a) << endl << abs(b) << endl;
  return 0;
}
*/
//9_1.cpp
#include <iostream>
using namespace std;
template <class T> //定义函数模板
void outputArray(const T *array, int count)
{
  for (int i = 0; i < count; i++)
    cout << array[i] << " "; //如果数组元素是类的对象，需要该对象所属类重载了流插入运算符“<<”
  cout << endl;
}
int main()
{
  const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
  int a[A_COUNT] = {1, 2, 3, 4, 5, 6, 7, 8};
  double b[B_COUNT] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
  char c[C_COUNT] = "Welcome!";
  cout << " a array contains:" << endl;
  outputArray(a, A_COUNT);
  cout << " b array contains:" << endl;
  outputArray(b, B_COUNT);
  cout << " c array contains:" << endl;
  outputArray(c, C_COUNT);
  return 0;
}
