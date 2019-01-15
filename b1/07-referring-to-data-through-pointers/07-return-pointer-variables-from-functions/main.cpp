#include <iostream>
#include <sstream>    // access to ostringstream
#include <stdlib.h>   // access to rand()

std::string *getSecretCode()
{
  std::string *code = new std::string;
  code->append("CR");

  int randomNumber = rand();
  std::ostringstream converter;
  converter << randomNumber;

  code->append(converter.str());
  code->append("NQ");

  return code;
}

int main()
{
  std::string *ptrNewCode;
  std::string newCode;
  int index;

  for (index = 0; index < 10; index++) {
    ptrNewCode = getSecretCode();
    std::cout << *ptrNewCode << "\n";
  }

  // the for loop above is equivalent as that below
  for (index = 0; index < 10; index++) {
    newCode = *getSecretCode();
    std::cout << newCode << "\n";
  }

  return 0;
}
