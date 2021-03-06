#include <iostream>
using namespace std;

class A
{
public:
  void setA(int);
  void showA() const;

private:
  int a;
};
class B
{
public:
  void setB(int);
  void showB() const;

private:
  int b;
};
class C : public A, private B
{
public:
  void setC(int, int, int);
  void showC() const;

private:
  int c;
};
void A::setA(int x)
{
  a = x;
}
void A::showA() const
{
  cout << a << endl;
}
void B::setB(int x)
{
  b = x;
}
void B::showB() const
{
  cout << b << endl;
}
void C::setC(int x, int y, int z)
{
  //派生类成员直接访问基类的
  //公有成员
  setA(x);
  setB(y);
  c = z;
}
void C::showC() const
{
  cout << c << endl;
}
//其他函数实现略

int main()
{
  C obj;
  obj.setA(5);
  obj.showA();
  obj.setC(6, 7, 9);
  obj.showC();
  // obj.setB(6);  错误
  // obj.showB(); 错误
  return 0;
}
