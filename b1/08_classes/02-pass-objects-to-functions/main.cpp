/**
 * Always pass objects as pointers. Don't pass objects directly into functions.
 * 
 * You can pass a point to an object to a function like this:
 * void FixFlatTire(Car *myCar);
 *
 * If you like references, you are welcome to do this:
 * void Fixflattire(Car &myCar);
 *
 * If you don't want to modify the object, you can use const, as shown in the
 * following example.
 */

#include <iostream>
#include "Pen.h"

void inspect(const Pen *Checkitout)
{
  std::cout << Checkitout->Brand << "\n";
}

int main()
{
  Pen *MyPen = new Pen();
  MyPen->Brand = "Spy Plus Camera";

  inspect(MyPen);
  return 0;
}
