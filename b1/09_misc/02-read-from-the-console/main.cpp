#include <iostream>
#include <sstream>

int StringToNumber(std::string MyString) {
  std::istringstream converter(MyString);
  int result;

  converter >> result;
  return result;
}

std::string EnterOnlyNumbers() {
  std::string numAsString = "";
  char ch = getchar();

  // Keep requesting characters until the user passes Enter.
  while (ch != '\r'){
    if (ch >= '0' && ch <= '9') {
      std::cout << ch;
      numAsString += ch;
    }
    ch = getchar();
  }
  
  return numAsString;
}

std::string EnterPassword() {
  std::string numAsString = "";
  char ch = getchar();

  while (ch != '\r') {
    // Display an asterisk instead of the input characters
    std::cout << '*';
    numAsString += ch;
    ch = getchar();
  }

  return numAsString;
}

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  std::cin >> name;

  std::cout << "Hello " << name << "\n";

  // Now you are asked to enter a number
  // But the computer allows you to enter anything
  int x;
  std::cout << "\n";
  std::cout << "Enter a number, any number! ";
  std::cin >> x;
  std::cout << "You chose " << x << "\n";

  // This time you can only enter a number.
  std::cout << "\n";
  std::cout << "This time you'll only be able to enter a number!" << "\n";
  std::cout << "Enter a number, any number! ";
  std::string entered = EnterOnlyNumbers();
  int num = StringToNumber(entered);
  std::cout << "\n" << "You entered " << num << '\n';

  // Now enter a password
  std::cout << "\n";
  std::cout << "Enter your password! ";
  std::string password = EnterPassword();
  std::cout << '\n' << "Shhh, it's " << password << '\n';

  return 0;
}

