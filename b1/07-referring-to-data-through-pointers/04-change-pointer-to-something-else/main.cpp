#include <iostream>

int main()
{
  int expensiveComputer;
  int cheapComputer;
  int *ptrToComp;

  ptrToComp = &expensiveComputer;
  *ptrToComp = 2000;
  std::cout << *ptrToComp << "\n";

  ptrToComp = &cheapComputer;
  *ptrToComp = 500;
  std::cout << *ptrToComp << "\n";

  ptrToComp = &expensiveComputer;
  std::cout << *ptrToComp << "\n";
  return 0;
}
