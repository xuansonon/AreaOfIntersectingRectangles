#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
  Rectangle rectangleA(1,5,6,2);
  Rectangle rectangleB(3,6,7,1);
  std::cout << rectangleA.find_overlap_area(rectangleB) << std::endl;
  return 0;
}
