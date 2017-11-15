#include <iostream>

using namespace std;

int count = 0;

void move(char src, char dist){
  cout << src << "->" << dist << endl;
}

void hanoi(int n, char src, char middle, char dist){
  count++;
  if(n == 1){
    move(src, dist);
  }else {
    hanoi(n-1, src, dist, middle);
    move(src, dist);
    hanoi(n-1, middle, src, dist);
  }
}

int main() {
  int n;
  char A, B, C;
  A = 'A', B = 'B', C = 'C';
  cout << "Enter the count of disk: ";
  cin >> n;
  hanoi(n, A, B, C);
  cout << count << endl;
  return 0;
}