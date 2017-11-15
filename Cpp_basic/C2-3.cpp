#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < 2*n-1; i++)
  {
    int j = i + 1;
    
    for(int k = 0; k < abs(-j+n); k++){
      cout << " ";
    }
    for (int h = 0; h < -abs(2*j-2*n)+2*n-1; h++)
    {
      cout << "*";
    }
    cout << endl;
  } 
  return 0;
}