#include <iostream>

class Colors
{
public:
  enum ColorEnum {blue, red, green, yellow, black};
  Colors(Colors::ColorEnum value);
  std::string AsString();

protected:
  ColorEnum value;
};

Colors::Colors(Colors::ColorEnum initvalue)
{
  value = initvalue;
}

std::string Colors::AsString()
{
  switch (value) {
  case blue: 
    return "blue";
  case red:
    return "red";
  case green:
    return "green";
  case yellow:
    return "yellow";
  case black:
    return "black";
  default:
    return "Not Found";
  }
}

std::ostream &operator << (std::ostream &out, Colors &inst)
{
  out << inst.AsString();
  return out;
}

int main()
{
  // Two ways to initialize an instance
  // Colors InkColor = Colors(Colors::red);
  Colors InkColor = Colors::red;
  std::cout << InkColor.AsString() << "\n";
  std::cout << InkColor << "\n";
  return 0;
}
