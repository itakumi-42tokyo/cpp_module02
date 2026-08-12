#include "Point.h"

namespace {
  double cross_product(Point a, Point b, Point p) {
    return ((b.getPointX() - a.getPointX()) * 
      (p.getPointY() - a.getPointY()) 
        - (b.getPointY() - a.getPointY()) *
          (p.getPointX() - a.getPointX())).toFloat();
  }
  
  bool is_inside(Point a, Point b, Point c, Point p) {
    double cp1 = cross_product(a, b, p);
    double cp2 = cross_product(b, c, p);
    double cp3 = cross_product(c, a, p);
    
    bool is_all_pos = (cp1 > 0) && (cp2 > 0) && (cp3 > 0);
    bool is_all_neg = (cp1 < 0) && (cp2 < 0) && (cp3 < 0);
    
    return is_all_pos || is_all_neg;
  }
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
  return is_inside(a, b, c, point);
}
