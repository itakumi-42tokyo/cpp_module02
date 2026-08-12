#include "Fixed.h"
#include "Point.h"
#include "bsp.h"

void run_test(int ax, int ay, int bx, int by, int cx, int cy, int x, int y, bool expect) {
  Point a(ax, ay);
  Point b(bx, by);
  Point c(cx, cy);
  Point p(x, y);
  
  if (expect == bsp(a, b, c, p))
    std::cout << "Success!" << std::endl;
  else
    std::cout << "Failure..." << std::endl;
}

int main() {
  // --- Test In! ---
  std::cout << "--- Test In! case ---" << std::endl;
  run_test(0, 0, 0, 3, 3, 0, 1, 1, true);

  std::cout << "--- Test Out! case ---" << std::endl;
  run_test(0, 0, 0, 3, 3, 0, 10, 10, false);
}
