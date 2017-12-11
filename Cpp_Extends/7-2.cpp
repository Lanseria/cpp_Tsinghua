#include <iostream>
using namespace std;

// 基类Point类的定义
class Point
{
public:
  // 公有函数成员
  void initPoint(float x = 0, float y = 0)
  {
    this->x = x;
    this->y = y;
  }
  void move(float offX, float offY)
  {
    x += offX;
    y += offY;
  }
  float getX() const { return x; }
  float getY() const { return y; }

private:
  // 私有数据成员
  float x, y;
};

class Rectangle : private Point
{
  // 派生类定义部分
public:
  // 新增公有函数成员
  void initRectangle(float x, float y, float w, float h)
  {
    initPoint(x, y);
    this->w = w;
    this->h = h;
  }
  void move(float offX, float offY) { Point::move(offX, offY); }
  float getX() const { return Point::getX(); }
  float getY() const { return Point::getY(); }
  float getH() const { return h; }
  float getW() const { return w; }

private:
  // 新增私有数据成员
  float w, h;
};

int main()
{
  Rectangle rect;
  rect.initRectangle(2, 3, 20, 10);
  rect.move(3, 2);
  cout << "THe data of rect (x, y, w, h): " << endl;
  cout << rect.getX() << ","
       << rect.getY() << ","
       << rect.getW() << ","
       << rect.getH() << endl;
  return 0;
}
