#include "../includes/Point.hpp"


////////////// CONSTRUCTOR //////////////////

Point::Point(void) : _x(0), _y(0) {
	return;
}

// constructeur par copie
Point::Point(Point const & source) : _x(source._x), _y(source._y) {
	return;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	return;
}

Point::~Point(void){
	return;
}

////////////// OPERATORS //////////////////

Point & Point::operator=(Point const & source) {
	(void)source;
    return *this;
}

////////////// ACCESSORS //////////////////

Fixed Point::getX(void) const{
	return (_x);
}

Fixed Point::getY(void) const{
	return (_y);
}










