#include <iostream>
using namespace std;
#if 1
int sum(int a, int b = 20)
{
  int res;
  res = a + b;
  return (res);
}
int main()
{
  int a = 100;
  int b = 200;
  int res;
  res = sum(a, b);
  cout << res << endl;
  res =  sum(a);
  cout << res << endl;
  return 0;
}
#endif
#if 0
/*
整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
*/
/*
const	const 类型的对象在程序执行期间不能被修改改变。
volatile	修饰符 volatile 告诉编译器，变量的值可能以程序未明确指定的方式被改变。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
C++提供了关键字explicit，可以阻止不应该允许的经过转换构造函数进行的隐式转换的发生。声明为explicit的构造函数不能在隐式转换中使用。
*/
int main()
{
  double x = 314159E-5L;
  return 0;
}
#endif
#if 0
// 全局变量声明
int g;
 
int main ()
{
  // 局部变量声明
  int a, b;
 
  // 实际初始化
  a = 10;
  b = 20;
  g = a + b;
 
  cout << g;
 
  return 0;
}
#endif
#if 0
// 函数声明
int func();
 
int main()
{
    // 函数调用
    int i = func();
}
 
// 函数定义
int func()
{
    return 0;
}
#endif

#if 0
// 变量声明
extern int a, b;
extern int c;
extern float f;
  
int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c << endl ;
 
  f = 70.0/3.0;
  cout << f << endl ;
 
  return 0;
}
#endif

#if 0
int main()
{
  enum color { red, green, blue } c;
  c = blue;
}
#endif
#if 0
int main()
{
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long long : " << sizeof(long long) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   return 0;
}
#endif
#if 0
int main()
{
  cout << "Hello World!" << endl;
  return 0;

}
#endif