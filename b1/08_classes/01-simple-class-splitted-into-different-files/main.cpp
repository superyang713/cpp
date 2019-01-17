#include <iostream>
#include "Pen.h"

int main()
{
  Pen FavoritePen;

  FavoritePen.InkColor = blue;
  FavoritePen.ShellColor = grey;
  FavoritePen.CapColor = blue;
  FavoritePen.Style = ballpoint;
  FavoritePen.Length = 5.5;
  FavoritePen.Brand = "office Depot";
  FavoritePen.InkLevelPrecent = 30;

  Pen WorstPen;

  WorstPen.InkColor = red;
  WorstPen.ShellColor = grey;
  WorstPen.CapColor = black;
  WorstPen.Style = fountain_pen;
  WorstPen.Length = 5.0;
  WorstPen.Brand = "Parker";
  WorstPen.InkLevelPrecent = 60;

  std::cout << "This is my favorite pen" << "\n";
  std::cout << "Color: " << FavoritePen.InkColor << "\n";
  std::cout << "Brand" << FavoritePen.Brand << "\n";
  std::cout << "Ink Level: " << FavoritePen.InkLevelPrecent << "%" << "\n";

  FavoritePen.write_on_paper("Hello I am a pen");
  std::cout << "Ink Level: " << FavoritePen.InkLevelPrecent << "%" << "\n";

  Pen *myPen;
  myPen = new Pen;

  myPen->InkColor = red;
  std::cout << myPen->InkColor << "\n";

  delete myPen;
  myPen = 0;
  
  return 0;
}
