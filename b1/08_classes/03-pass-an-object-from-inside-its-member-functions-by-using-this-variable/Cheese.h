#ifndef CHEESE_H_INCLUDED
#define CHEESE_H_INCLUDED

extern int CheeseCount;

class Cheese
{
 public:
  std::string status;
  void eat();
  void rot();
};


#endif
