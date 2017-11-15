#include <iostream> 
using namespace std;
int hailstone(int n)
{
  int length = 1;
  while(n > 1){
    (n % 2) ? n = 3 * n + 1 : n = n / 2;
    length++;
  }
  return length;
}

int main(){
  cout << hailstone(42);
  return 0;
}