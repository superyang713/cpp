#include <iostream>

int main()
{
  int *ptr1 = new int;
  *ptr1 = 10;
  std::cout << *ptr1 << "\n";

  int *ptr2 = new int(15);
  std::cout << *ptr2 << "\n";


  // Using delete to clean up pointers
  std::string *phrase = new std::string("All presidents are cool!!");
  std::cout << *phrase << "\n";
  (*phrase)[20] = 'r';
  phrase->replace(22, 4, "oked");
  std::cout << *phrase << "\n";

  delete phrase;
  std::cout << phrase << "\n";
  return 0;
}
