#include <iostream>
#include "Cheese.h"

int CheeseCount;

int main()
{
  Cheese *asiago = new Cheese();
  Cheese *limburger = new Cheese();

  CheeseCount = 2;

  asiago->eat();
  limburger->rot();
  
  std::cout << "\n";
  std::cout << "Cheese Count: " << CheeseCount << "\n";
  std::cout << "asiago: " << asiago->status << "\n";
  std::cout << "limburger: " << limburger->status << "\n";
  
  return 0;
}
