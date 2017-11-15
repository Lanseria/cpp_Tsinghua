#include <iostream>

using namespace std;

// enum Weekday {SUM, MON, TUE, WED, THU, FRI, SAT};
enum Weekday {SUM=7, MON=1, TUE, WED, THU, FRI, SAT};
// 不限定作用域的枚举类型

enum GameResult {WIN, LOSE, TIE, CANCEL};

int main() {
  GameResult result;
  enum GameResult omit = CANCEL;
  for (int i = WIN; i <= CANCEL; i++)
  {
    result = GameResult(i);
    if (result == omit)
    {
      cout << "The game was cancelled" << endl;
    } else {
      cout << "The game was played ";
      if (result == WIN)
      {
        cout << "and we won!";
      } 
      if (result == LOSE)
      {
        cout << "and we lose";
      }
      cout << endl;
    }
  }
  return 0;
}