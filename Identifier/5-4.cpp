#include <iostream>
#include <cmath>
using namespace std;
class Point
{       //Point类声明
public: //外部接口
  Point(int x = 0, int y = 0) : x(x), y(y) {}
  int getX() { return x; }
  int getY() { return y; }
  friend float dist(Point &a, Point &b);

private: //私有数据成员
  int x, y;
};
float dist(Point &a, Point &b)
{
  double x = a.x - b.x;
  double y = a.y - b.y;
  return static_cast<float>(sqrt(x * x + y * y));
}
int main()
{
  Point p1(1, 1), p2(4, 5);
  cout << "The distance is: ";
  cout << dist(p1, p2) << endl;
  return 0;
}
