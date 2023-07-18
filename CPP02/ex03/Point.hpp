#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point {
 public:
	Point();
	Point(const float x, const float y);
	Point(const Fixed x, const Fixed y);
	Point(const Point &point);
	~Point();
	Point &operator=(const Point &point);

	Fixed get_x() const;
	Fixed get_y() const;
	
 private:
	const Fixed x;
	const Fixed y;
};

#endif