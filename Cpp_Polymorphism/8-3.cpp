// 重载Complex 的加法减法和 << 运算符为 非成员函数

// 将 +，- 双目 重载为非成员函数，并将其声明为复数类的友元，两个操作数都是复数类的常引用

// 将 << 双目 重载为非成员函数，并将其声明为复数类的友元，它的左操作数是 std::ostream 引用，右操作数为复数类的常引用，返回 std::ostream 引用，用以支持下面形式的输出：

// cout << a << b;
// 该输出调用的是：
// operator << (operator << (cout, a), b);

#include <iostream>
using namespace std;

class Complex
{
public:
  Complex(double r = 0.0, double i = 0.0): real(r), imag(i) {}
  friend Complex operator+(const Complex &c1, const Complex &c2);
  friend Complex operator-(const Complex &c1, const Complex &c2);
  friend ostream & operator<<(ostream &out, const Complex &c);

private:
  double real;
  double imag;
};
Complex operator+(const Complex &c1, const Complex &c2) {
  return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
Complex operator-(const Complex &c1, const Complex &c2) {
  return Complex(c1.real - c2.real, c1.imag + c2.imag);
}
ostream & operator<< (ostream &out, const Complex &c) {
  out << "(" << c.real << ", " << c.imag << ")";
  return out;
}
int main () {
  Complex c1(5, 4), c2(2, 10), c3;
  cout << "c1 = " << c1 << endl;
  cout << "c2 = " << c2 << endl;
  c3 = c1 - c2;
  cout << "c3 = c1 - c2 = " << c3 << endl;
  c3 = c1 + c2;
  cout << "c3 = c1 + c2 = " << c3 << endl;
  return 0;
}