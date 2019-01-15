#include <iostream>


int main()
{
  int number;
  int *ptr = &number;
  int saveForLater;
  *ptr = 6087;
  saveForLater = *ptr;

  std::cout << saveForLater << "\n";

  *ptr = 7000;

  std::cout << *ptr << "\n";
  std::cout << saveForLater << "\n";
  return 0;
}
