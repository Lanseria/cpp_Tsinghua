#include<iostream>
using namespace std;
class Base1 {
public:
  void display() const {
    cout << "Base1::display()" << endl;
  }
};
class Base2 {
public:
  virtual void display() final
  {
    cout << "Base1::display()" << endl;
  }
};
class Derived: public Base1 {
public:
  void d () const {
    cout << "D::display()" << endl;
  }
};
class Derived1: public Base2 {
public:
  void display () {
    cout << "D::display()" << endl;
  }
};
int main () {
  Derived d;
  Base1 b;
  return 0;
}