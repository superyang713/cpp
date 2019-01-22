#include <iostream>

#ifdef UNIVAC
const int total = 200;
const std::string compname = "UNIVAC";
#elif defined(HAL2000)
const int total = 300;
const std::string compname = "HAL2000";
#else
const int total = 400;
const std::string compname = "My Computer";
#endif

// The following is outdated. Might see it occasionally.
#define oldmax(x, y) ((x) > (y) ? (x) : (y))
#define MYSPECIALNUMBER 42

int main()
{
  std::cout << "Welcome to " << compname << "\n";
  std::cout << "Total is:" << "\n";
  std::cout << total << "\n\n";

  // Try out the outdated things
  std::cout << "*** max ***" << "\n";
  std::cout << oldmax(5, 10) << "\n";
  std::cout << oldmax(20, 15) << "\n";
  std::cout << MYSPECIALNUMBER << "\n\n";


  // Here are some standard predefined macros.
  std::cout << "*** Predefined Macros ***" << "\n";
  std::cout << "This is file " << __FILE__ << "\n";
  std::cout << "This is line " << __LINE__ << "\n";
  std::cout << "Compiled on " << __DATE__ << "\n";
  std::cout << "Compile at " << __TIME__ << "\n\n";

  // Here's how some people use #define.
  // to specify a "debug" version or
  // "release" version.
  std::cout << "*** Total ***" << "\n";
  int i;
  int j = 0;
  for (i = 0; i < total; i++) {
    j = j + i;
  }

#ifdef DEBUG
  std::cout << "The value of j is " << j << "\n";
#else
  std::cout << j << "\n";
#endif
  
  return 0;
}

