#include <iostream>
#include "Class.h"

void Door::Start()
{
  HowManyInside = 0;
}

void Door::GoThrough(Cat *cat)
{
  std::cout << "Welcome, " << cat->name << "\n";
  std::cout << "A cat just entered!" << "\n";
  HowManyInside++;
}

void Door::GoThrough(Dog *dog)
{
  std::cout << "Welcome, " << dog->name << "\n";
  std::cout << "A cat just entered!" << "\n";
  HowManyInside++;
}

void Door::GoThrough(Human *human)
{
  std::cout << "Welcome, " << human->name << "\n";
  std::cout << "A human just entered!" << "\n";
  HowManyInside++;
}
