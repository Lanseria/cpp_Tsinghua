#include <iostream>
#include <queue>
using namespace std;

int main () {
  queue<int> q;
  q.push(10);
  cout << (q.front() == q.back());
  cout << (q.emplace(20), q.back() == 20) << endl;
  return 0;
}
