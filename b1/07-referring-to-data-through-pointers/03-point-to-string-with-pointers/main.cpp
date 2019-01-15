#include <iostream>

int main()
{
  std::string goodMovie;
  std::string *ptrToString;
  goodMovie = "Best in Show";

  ptrToString = &goodMovie;
  std::cout << ptrToString << "\n";
  std::cout << *ptrToString << "\n";

  *ptrToString = "Galaxy Quest";
  std::cout << goodMovie << "\n";

  std::string horribleMovie = "L.A. Confidential";
  ptrToString = &horribleMovie;
  for (unsigned i = 0; i < horribleMovie.length(); i++) {
    std::cout << (*ptrToString)[i] << " ";
  }
  for (unsigned i = 0; i < (*ptrToString).length(); i++) {
    std::cout << (*ptrToString)[i] << " ";
  }
  return 0;
}
