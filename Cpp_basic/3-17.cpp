// C++ 系统函数
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main()
{
  double angle;
  cout << "Please enter an angle: ";
  cin >> angle;
  double radian = angle * PI / 180;// 转换为弧度
  cout << "sin(" << angle << ") = " << sin(radian) << endl;
  cout << "cos(" << angle << ") = " << cos(radian) << endl;
  cout << "tan(" << angle << ") = " << tan(radian) << endl;
  cout << fabs(angle) << endl;
  return 0;
}
