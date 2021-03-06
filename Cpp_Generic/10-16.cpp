#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main () {
  int intArr[] = {30,90,10,40,70,20,80};
  const int N = sizeof(intArr) / sizeof(int);
  vector<int> a(intArr, intArr + N);
  cout << "before sorting: " << endl;
  copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  sort(a.begin(), a.end(), greater<int>());
  cout << "after sorting: " << endl;
  copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  return 0;
}
