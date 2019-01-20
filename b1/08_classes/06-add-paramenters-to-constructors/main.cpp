#include "Squirrel.h"

int main()
{
  Squirrel *Sam = new Squirrel("Sam");
  Squirrel *Sally = new Squirrel("Sally");

  Sam->WhatIsMyName();
  Sally->WhatIsMyName();
  
  return 0;
}
