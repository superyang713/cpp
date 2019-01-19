#include <string>

#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Cat
{
 public:
  std::string name;
};

class Dog
{
 public:
  std::string name;
};

class Human
{
 public:
  std::string name;
};

class Door
{
 private:
  int HowManyInside;

 public:
  void Start();
  void GoThrough(Cat *cat);
  void GoThrough(Dog *dog);
  void GoThrough(Human *human);
};

#endif
