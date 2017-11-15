#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[3] = {0};
  cin >> arr[0] >> arr[1] >> arr[2];
  sort(arr, arr+3);
  if(arr[2] > arr[1] + arr[0])
    cout << (arr[0] + arr[1])*2 <<endl;
  else
    cout << arr[0] + arr[1] + arr[2] << endl;
  return 0;
}
