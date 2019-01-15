#include <iostream>

int main()
{
  int number = 532587;
  int* ptr = &number;
  std::cout << &number << "\n";
  std::cout << ptr << "\n";

  std::cout << *ptr << "\n";

  *ptr = 5555;
  std::cout << ptr << "\n";
  std::cout << *ptr << "\n";
  std::cout << number << "\n";
  return 0;
}
