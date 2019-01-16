#include <iostream>

void noChangesAreGood(int myParam)
{
  myParam += 10;
  std::cout << "Inside the function:" << "\n";
  std::cout << myParam << "\n";
}

void changesAreGood(int *myParam)
{
  *myParam += 10;
  std::cout << "Inside the function:" << "\n";
  std::cout << *myParam << "\n";
}

int main()
{
  int myNumber = 30;
  std::cout << "Before the function:" << "\n";
  std::cout << myNumber << "\n";

  noChangesAreGood(myNumber);
  std::cout << "after the function:" << "\n";
  std::cout << myNumber << "\n";

  changesAreGood(&myNumber);
  std::cout << "After the function:" << "\n";
  std::cout << myNumber << "\n";
  return 0;
}

