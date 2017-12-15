#include <iostream>

using namespace std;

void sumRow (int table[][4], int rowIndex) {
  for (int i = 0; i < rowIndex; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      table[i][0] += table[i][j];
    }
  }
}

int main () {
  int table[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
  sumRow(table, 3);
  for (int i = 0; i < 3; i++)
  {
    cout << table[i][0] << " ";
  }
  return 0;
}