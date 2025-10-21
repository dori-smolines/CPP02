#ifndef Point_HPP
# define Point_HPP
#include <iostream>
# include <cmath>
#include "Fixed.hpp"

class Point {

private :
    Fixed const _x;
    Fixed const _y;
	
public :
	//constructors	
	Point(void);
	Point(float const x, float const y);
	~Point(void);
	Point(Point const & src); // const par copie

	//operators
	Point & operator=(Point const & source); 

	//accessors
	Fixed getX(void) const;
	Fixed getY(void) const;

};

	bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif










