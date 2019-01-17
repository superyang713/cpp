#include <iostream>
#include "Pen.h"

void Pen::write_on_paper(std::string words) {
  if (InkLevelPercent) {
    std::cout << "Oops, Out of ink!" << "\n";
  } else {
    std::cout << words << "\n";
    InkLevelPercent = InkLevelPercent - words.length();
  }
}

void Pen::break_in_half(){
  InkLevelPercent = InkLevelPercent / 2;
  Length = Length / 2.0;
}

void Pen::run_out_of_ink() {
  InkLevelPercent = 0;
}
