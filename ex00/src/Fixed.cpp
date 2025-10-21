#include "../includes/Fixed.hpp"
#include <iostream>

int const	Fixed::_fract = 8;

////////////// CONSTRUCTOR //////////////////

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << BLUE << "Default constructor called"<< RESET << std::endl;
	return;
}

Fixed::Fixed(Fixed const & source) // constructeur par copie
{
	std::cout << GREEN << "Copy constructor called"<< RESET << std::endl;
	*this = source;
	return;
}

Fixed & Fixed::operator=(Fixed const & nb) // surcharge operateur affectation
{
	std::cout << PINK << "Copy assignment operator called"<< RESET << std::endl;
	this->_rawBits = nb.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << YELLOW << "Destructor called"<< RESET << std::endl;
	return;
}

////////////// METHODS //////////////////

int Fixed::getRawBits( void ) const
{
	std::cout << RED << "getRawBits member function called"<< RESET << std::endl;
	return (this->_rawBits);
	
}
void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
	return;
}



