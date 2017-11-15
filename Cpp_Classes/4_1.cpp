// 导学
// 举例
#include <iostream>
#include <algorithm>
using namespace std;
// 类的定义
class Clock {
  public:
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
  private:
    int hour, minute, second;
};
// 成员函数的实现
void Clock::setTime(int newH, int newM, int newS) {
  hour = newH;
  minute = newM;
  second = newS;
}
void Clock::showTime() {
  cout << hour << ":" << minute << ":" << second;
}

int main()
{
  Clock myClock;
  myClock.setTime(8, 30, 30);
  myClock.showTime();
  return 0;
}
