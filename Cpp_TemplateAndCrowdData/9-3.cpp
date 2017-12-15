#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;

template <class T> //数组类模板定义
class Array
{
private:
  T *list;  //用于存放动态分配的数组内存首地址
  int size; //数组大小（元素个数）
public:
  Array(int sz = 50);                       //构造函数
  Array(const Array<T> &a);                 //复制构造函数
  ~Array();                                 //析构函数
  Array<T> &operator=(const Array<T> &rhs); //重载"=“
  T &operator[](int i);                     //重载"[]”
  const T &operator[](int i) const;         //重载"[]”常函数
  operator T *();                           //重载到T*类型的转换
  operator const T *() const;
  int getSize() const; //取数组的大小
  void resize(int sz); //修改数组的大小
};
template <class T>
Array<T>::Array(int sz)
{                     //构造函数
  assert(sz >= 0);    //sz为数组大小（元素个数），应当非负
  size = sz;          // 将元素个数赋值给变量size
  list = new T[size]; //动态分配size个T类型的元素空间
}
template <class T>
Array<T>::~Array()
{ //析构函数
  delete[] list;
}
template <class T>
Array<T>::Array(const Array<T> &a)
{                                //复制构造函数
  size = a.size;                 //从对象x取得数组大小，并赋值给当前对象的成员
  list = new T[size];            // 动态分配n个T类型的元素空间
  for (int i = 0; i < size; i++) //从对象X复制数组元素到本对象
    list[i] = a.list[i];
}
template <class T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
  if (&rhs != this)
  {
    //如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
    if (size != rhs.size)
    {
      delete[] list;      //删除数组原有内存
      size = rhs.size;    //设置本对象的数组大小
      list = new T[size]; //重新分配size个元素的内存
    }
    //从对象X复制数组元素到本对象
    for (int i = 0; i < size; i++)
      list[i] = rhs.list[i];
  }
  return *this; //返回当前对象的引用
}
//重载下标运算符，实现与普通数组一样通过下标访问元素，具有越界检查功能
template <class T>
T &Array<T>::operator[](int n)
{
  assert(n >= 0 && n < size); //检查下标是否越界
  return list[n];             //返回下标为n的数组元素
}
//重载指针转换运算符，将Array类的对象名转换为T类型的指针
template <class T>
Array<T>::operator T *()
{
  return list; //返回当前对象中私有数组的首地址
}

//取当前数组的大小
template <class T>
int Array<T>::getSize() const
{
  return size;
}

// 将数组大小修改为sz
template <class T>
void Array<T>::resize(int sz)
{
  assert(sz >= 0); //检查sz是否非负
  if (sz == size)  //如果指定的大小与原有大小一样，什么也不做
    return;
  T *newList = new T[sz];          //申请新的数组内存
  int n = (sz < size) ? sz : size; //将sz与size中较小的一个赋值给n
  //将原有数组中前n个元素复制到新数组中
  for (int i = 0; i < n; i++)
    newList[i] = list[i];
  delete[] list;  //删除原数组
  list = newList; // 使list指向新数组
  size = sz;      //更新size
}


int main()
{
  // 用来存放质数的数组，初始状态有10个元素
  Array<int> a(10);
  int n, count = 0;
  cout << "Enter a value >= 2 as upper limit for prime numbers: ";
  cin >> n;

  for (int i = 2; i <= n; i++)
  { //检查i是否能被比它小的质数整除
    bool isPrime = true;
    for (int j = 0; j < count; j++)
      //若i被a[j]整除，说明i不是质数
      if (i % a[j] == 0)
      {
        isPrime = false;
        break;
      }
    if (isPrime)
    {
      if (count == a.getSize())
        a.resize(count * 2);
      a[count++] = i;
    }
  }
  for (int i = 0; i < count; i++)
    cout << setw(8) << a[i];
  cout << endl;
  return 0;
}