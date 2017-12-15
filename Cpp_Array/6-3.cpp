// Point.h
#include <iostream>
using namespace std;
class Point
{
public:
  Point();
  Point(int x, int y);
  ~Point();
  void move(int newX, int newY);
  int getX() const {return x;}
  int getY() const {return y;}
  static void showCount();;

private:
  int x, y;
};

Point::Point():x(0),y(0)
{
  cout << "Default Constructor called." << endl;
}
Point::Point(int x, int y):x(x),y(y)
{
  cout << "Constructor called." << endl;
}
Point::~Point()
{
  cout << "Destructor called." << endl;
}
void Point::move(int newX, int newY)
{
  cout << "Moving the point to (" << newX << ", " << newY << ")" << endl;
  x = newX;
  y = newY;
}

int main () {
  cout << "Entering main..." << endl;
  Point a[2];
  for (int i = 0; i < 2; i++)
  {
    a[i].move(i + 10, i + 20);
  }
  cout << "Exiting main..." << endl;
}