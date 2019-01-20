#include <iostream>
#include "Squirrel.h"

// Constructor
Squirrel::Squirrel(std::string StartName)
{
  std::cout << "Starting!" << "\n";
  name = StartName;
}


void Squirrel::WhatIsMyName()
{
  std::cout << "My name is " << name << "\n";
}
