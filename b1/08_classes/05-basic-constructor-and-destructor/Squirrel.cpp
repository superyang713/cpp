#include <iostream>
#include "Squirrel.h"

Squirrel::Squirrel()
{
  std::cout << "Starting!" << "\n";
  MyDinner = new Walnut;
  MyDinner->Size = 30;
}

Squirrel::~Squirrel()
{
  std::cout << "Cleaning up my mess" << "\n";
  delete MyDinner;
}
