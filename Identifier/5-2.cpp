#include <iostream>

using namespace std;
int i = 1;
void ther () {
  static int a = 2; // a,b为静态局部变量，具有全局寿命，局部可见。
  static int b;
  int c = 10;
  a += 2; i += 32;c += 5;
  cout << "---OTHER--\n";
  cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
  b = a;
}
int main () {
  static int a;
  int b = -10;
  int c = 0;
  cout << "--MAIN--\n";
  cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
  c += 8;
  ther();
  cout << "--MAIN--\n";
  cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
  i += 10;
  ther();
  return 0;
}