#include "Point.h"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
}

Point::Point(float const a, float const b) : x(Fixed(a)), y(Fixed(b)) {
}

Point::Point(const Point& a) : x(a.x), y(a.y) {
}

Point& Point::operator=(const Point& a) {
  (void)a;
  return *this;
}

Point::~Point() {
}



const Fixed Point::getPointX() {
  return (x);
}

const Fixed Point::getPointY() {
  return (y);
}
