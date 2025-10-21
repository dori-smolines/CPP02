#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

int const	Fixed::_fract = 8;

////////////// CONSTRUCTOR //////////////////

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << BLUE << "Default constructor called"<< RESET << std::endl;
	return;
}

Fixed::Fixed(Fixed const & source) // constructeur par copie
{
	std::cout << BLUE << "Copy constructor called"<< RESET << std::endl;
	*this = source;
	return;
}

Fixed::Fixed(int const nbint)
{
	std::cout << BLUE << "Int constructor called"<< RESET << std::endl;
	this->_rawBits = nbint * (1 << _fract);
	return;
}
Fixed::Fixed(float const nbfloat)
{
	std::cout << BLUE << "Float constructor called"<< RESET << std::endl;
	this->_rawBits = static_cast<int>(roundf(nbfloat * (1 << _fract)));
	return;
}

Fixed::~Fixed(void)
{
	std::cout << YELLOW << "Destructor called"<< RESET << std::endl;
	return;
}

////////////// OPERATORS //////////////////

Fixed & Fixed::operator=(Fixed const & nb) // surcharge operateur affectation
{
	std::cout << BLUE << "Copy assignment operator called"<< RESET << std::endl;
	this->_rawBits = nb.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &source) 
{
        out << source.toFloat();
        return out;
}

////////////// ACCESSORS //////////////////

int Fixed::getRawBits( void ) const
{
	std::cout << BLUE << "getRawBits member function called"<< RESET << std::endl;
	return (this->_rawBits);
	
}
void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
	return;
}

////////////// METHODS //////////////////

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->_rawBits) / (1 << _fract);
}
int Fixed::toInt( void ) const
{
	return (this->_rawBits / (1 << _fract));
}




