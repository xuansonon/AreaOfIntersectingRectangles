#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(int ax, int ay, int bx, int by) {
  cornerA.push_back(ax);
  cornerA.push_back(ay);
  cornerB.push_back(bx);
  cornerB.push_back(by);
};

int Rectangle::find_length() {
  return abs(cornerA[0] - cornerB[0]);
}

int Rectangle::find_width() {
  return abs(cornerA[1] - cornerB[1]);
}


int Rectangle::find_area() {
  return (find_length() * find_width());
};

int Rectangle::find_perimeter() {
  return ((2 * find_length()) + (2 * find_width()));
};

static int find_lower_value(int aNumberA, int aNumberB) {
  return (aNumberA < aNumberB ? aNumberA : aNumberB);
}

int Rectangle::find_overlap_area(Rectangle aRectangle) {
  int x_intersectionCounts;
  int y_intersectionCounts;

  int lowerXA = find_lower_value(this->cornerA[0], this->cornerB[0]);
  int lowerYA = find_lower_value(this->cornerA[1], this->cornerB[1]);
  
  int lowerXB = find_lower_value(aRectangle.cornerA[0], aRectangle.cornerB[0]);
  int lowerYB = find_lower_value(aRectangle.cornerA[1], aRectangle.cornerB[1]);

  for(int i = lowerXA; i <= lowerXA + this->find_length(); i++) {
    for(int j = lowerXB; j <= lowerXB + aRectangle.find_length(); j++) {
      if(j == i) x_intersectionCounts++;
    }
  }

  for(int i = lowerYA; i <= lowerYA + this->find_width(); i++) {
    for(int j = lowerYB; j <= lowerYB + aRectangle.find_width(); j++) {
      if(j == i) y_intersectionCounts++;
    }
  }

  return (x_intersectionCounts - 1) * (y_intersectionCounts - 1);
}
