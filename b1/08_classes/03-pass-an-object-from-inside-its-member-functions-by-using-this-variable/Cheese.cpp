#include <iostream>
#include "Cheese.h"

void OneMoreCheeseGone(Cheese *Block)
{
  CheeseCount--;
  Block->status = "Gone";
}

void Cheese::eat()
{
  std::cout << "Eaten up! Yummy" << "\n";
  OneMoreCheeseGone(this);
}

void Cheese::rot()
{
  std::cout << "Rotted away! Yuck" << "\n";
  OneMoreCheeseGone(this);
}
