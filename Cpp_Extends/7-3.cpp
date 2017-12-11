#include <iostream>
using namespace std;

// error: 'int A::x' is protected within this context

// class A {
// protected:
//   int x;
// };

// int main () {
//   A a;
//   a.x = 5;
// }

class A {
protected:
  int x;
};

class B: public A {
public:
  void giveFive();
};
void B::giveFive()
{
  x = 5; // it can
}

int main () {
  B b;
  b.giveFive();
  return 0;
}
