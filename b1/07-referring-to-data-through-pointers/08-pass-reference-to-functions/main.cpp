#include <iostream>

void messMeUp(int &myParam)
{
  myParam = myParam * 2 + 10;
}

int main()
{
  int myNumber = 30;
  messMeUp(myNumber);
  std::cout << myNumber << "\n";
  return 0;
}
