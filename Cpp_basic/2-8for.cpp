#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i ==0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
  int sum = 0;
  for (size_t i = 1; i != 10; i++)
  {
    sum += i;
    cout << i;
  }
  cout << sum;
  return 0;
}