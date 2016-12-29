#pragma once
#include <vector>

class Rectangle {
  private:
    std::vector<int> cornerA;
    std::vector<int> cornerB;

  public:
    Rectangle(int ax, int ay, int bx, int by);
    int find_length();
    int find_width();
    int find_area();
    int find_perimeter();
    int find_overlap_area(Rectangle aRectangle);
};
