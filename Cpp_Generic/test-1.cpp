#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
  vector<int> s;
  s.push_back(5);
  copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
  s.clear();
  s.reserve(10);
  s[1] = 3; // 赋值后没效果
  copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
  return 0;
}