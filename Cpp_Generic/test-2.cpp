#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
int main () {
  list<int> s;
  *(back_inserter(s)++) = 5;
  copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
   return 0;
}