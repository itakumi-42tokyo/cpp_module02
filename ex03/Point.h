#ifndef POINT_H
#define POINT_H

#include "Fixed.h"

class Point {
 private:
  const Fixed x;
  const Fixed y;
 public:
  Point();
  Point(float const a, float const b);
  Point(const Point&);
  Point& operator=(const Point& a);
  ~Point();
  const Fixed getPointX();
  const Fixed getPointY();
};


#endif
