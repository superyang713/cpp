#ifndef SQUIRREL_H_INCLUDED
#define SQUIRREL_H_INCLUDED

#include <string>

class Squirrel
{
 private:
  std::string name;

 public:
  Squirrel(std::string name);
  void WhatIsMyName();
};

#endif
