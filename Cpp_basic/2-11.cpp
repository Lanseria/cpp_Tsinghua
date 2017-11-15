#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, num, sum = 0, min, max;
  cin >> n;
  while(n--){
    cin >> num;
    sum += num;
    if(n==1){
      min = num;
      max = num;
    }
    else {
      if (min > num)
        min = num;
      if (max < num)
        max = num;
    }
  }
  cout << sum<< " " << min << " " << max;
  return 0;
}