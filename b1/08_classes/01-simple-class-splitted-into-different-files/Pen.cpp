#include <iostream>
#include "Pen.h"

void Pen::write_on_paper(std::string words) {
  if (InkLevelPrecent <= 0) {
    std::cout << "Oops, Out of ink!" << "\n";
  }
  else {
    std::cout << words << "\n";
    InkLevelPrecent = InkLevelPrecent - words.length();
  }
}

void Pen::break_in_half() {
  InkLevelPrecent = InkLevelPrecent / 2;
  Length = Length / 2.0;
}

void Pen::run_out_of_ink() {
  InkLevelPrecent = 0;
}
