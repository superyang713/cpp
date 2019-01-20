#include "Squirrel.h"

int main()
{
  Squirrel *Sam = new Squirrel;
  Squirrel *Sally = new Squirrel;

  delete Sam;
  delete Sally;
  
  return 0;
}
