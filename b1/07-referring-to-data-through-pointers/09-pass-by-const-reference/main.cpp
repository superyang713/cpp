#include <iostream>

/**
 * You want to pass the string by reference, but you don't want to allow anyone to modify
 * the orignal value of the variable. You could just pass the string by value, and the
 * caller couldn't modify it. The problem is that the string can get rather large, and
 * moving all that data to a function is really time consuming--passing a reference is
 * simpler and faster.
 *
 * Using a const reference makes it possible to get the speed benefits of using a reference,
 * with the unchangeable nature of passing by value.
 */

std::string paranoid(const std::string *realmessage)
{
  std::string newString = *realmessage;
  newString[6] = 'i';
  newString.replace(9, 1, "");
  newString.insert(18, "ad");
  newString.replace(15, 2, "in");
  newString.replace(23, 7, "!");
  newString.replace(4, 3, "ali");

  return newString;
}

int main()
{
  std::string message = "The friends are having dinner";
  std::cout << message << "\n";

  std::string newMessage = paranoid(&message);
  std::cout << newMessage << "\n";
  return 0;
}

