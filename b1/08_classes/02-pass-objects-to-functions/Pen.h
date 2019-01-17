#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

enum Color {
  blue,
  red,
  black,
  clear,
  grey,
};

enum PenStyle {
  ballpoint,
  felt_tip,
  fountain_pen,
};

class Pen {
 public:
  Color InkColor;
  Color ShellColor;
  Color CapColor;
  PenStyle Style;
  float Length;
  std::string Brand;
  int InkLevelPercent;

  void write_on_paper(std::string words);
  void break_in_half();
  void run_out_of_ink();
};
  
#endif
