// 构造函数
#include <iostream>
#include <algorithm>
using namespace std;
// 类的定义
class Clock {
  public:
    Clock(int newH, int newM, int newS);// 构造函数的原型声明
    Clock();// 默认构造函数
    Clock(const Clock& p);
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
  cout << hour << ":" << minute << ":" << second << endl;
}
// 构造函数的实现
// 对象::构造对象函数(参数):参数列表 { 不加返回值 }
Clock::Clock(int newH, int newM, int newS): hour(newH), minute(newM), second(newS) {
}
Clock::Clock(): Clock(0, 0, 0) {
}
Clock::Clock(const Clock &p) {
  cout << "copied!" << endl;
}

Clock fun1 (Clock p) {
  return p;
}

int main()
{
  Clock myClock(1,1,1);// 必须的自动调用构造函数
  Clock myClock1;// 必须的自动调用构造函数
  // myClock.setTime(8, 30, 30);
  Clock c(myClock);
  Clock c1 = myClock1;
  Clock c2 = fun1(myClock1);
  myClock.showTime();
  myClock1.showTime();
  return 0;
}
