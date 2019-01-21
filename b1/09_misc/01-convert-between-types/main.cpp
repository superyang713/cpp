#include <iostream>
#include <sstream>

int StringToNumber(std::string MyString)
{
  std::istringstream converter(MyString);  // converts from string to number.
  int result;

  // Perform the conversion and return the result.
  converter >> result;

  return result;
}

std::string NumberToString(int Number)
{
  std::ostringstream converter;  // Converts from number to string.

  // Perform the conversion and return the results.
  converter << Number;
  return converter.str();
}

int main()
{
  float NumberOfKids;
  int ActualKids;

  // Truncate number from float to int.
  std::cout << "Float to Interger" << "\n";
  std::cout << "(Truncated)" << "\n";
  NumberOfKids = 2.5;
  ActualKids = (int)NumberOfKids;
  std::cout << NumberOfKids << " " << ActualKids << "\n";

  NumberOfKids = 2.1;
  ActualKids = (int)NumberOfKids;
  std::cout << NumberOfKids << " " << ActualKids << "\n";

  NumberOfKids = 2.9;
  ActualKids = (int)NumberOfKids;
  std::cout << NumberOfKids << " " << ActualKids << "\n";
  std::cout << "Float to Interger" << "\n\n";

  // Round number from float to int.
  std::cout << "(Rounded)" << "\n";
  NumberOfKids = 2.5;
  ActualKids = (int)(NumberOfKids + 0.5);
  std::cout << NumberOfKids << " " << ActualKids << "\n";

  NumberOfKids = 2.1;
  ActualKids = (int)(NumberOfKids + 0.5);
  std::cout << NumberOfKids << " " << ActualKids << "\n";

  NumberOfKids = 2.9;
  ActualKids = (int)(NumberOfKids + 0.5);
  std::cout << NumberOfKids << " " << ActualKids << "\n\n";

  // Convert string to number
  std::cout << "String to number" << "\n";
  int x = StringToNumber("12345") * 50;
  std::cout << x << "\n\n";

  // convert number to string
  std::cout << "Number to string" << "\n";
  std::string mystring = NumberToString(80525323);
  std::cout << mystring << "\n";  

  return 0;
}
