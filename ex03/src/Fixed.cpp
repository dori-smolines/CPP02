#include "../includes/Fixed.hpp"

int const	Fixed::_fract = 8;

////////////// CONSTRUCTOR //////////////////

Fixed::Fixed(void) : _rawBits(0){
	return;
}

Fixed::Fixed(Fixed const & source){ // constructeur par copie
	*this = source;
	return;
}

Fixed::Fixed(int const nbint){
	this->_rawBits = nbint * (1 << _fract);
	return;
}
Fixed::Fixed(float const nbfloat){
	this->_rawBits = static_cast<int>(roundf(nbfloat * (1 << _fract)));
	return;
}

Fixed::~Fixed(void){
	return;
}

////////////// OPERATORS //////////////////

Fixed & Fixed::operator=(Fixed const & nb){ 
	this->_rawBits = nb.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & nb){ 
	return Fixed(this->toFloat() + nb.toFloat());
} 

Fixed Fixed::operator-(Fixed const & nb){ 
	return Fixed(this->toFloat() - nb.toFloat());
}

Fixed Fixed::operator*(Fixed const & nb){ 
	return Fixed(this->toFloat() * nb.toFloat());
}

Fixed Fixed::operator/(Fixed const & nb){ 
	return Fixed(this->toFloat() / nb.toFloat());
}

std::ostream &operator<<(std::ostream &out, Fixed const &source) {
        out << source.toFloat();
        return out;
}

bool Fixed::operator>(Fixed const & source) const {
	return (this->_rawBits > source.getRawBits());
}
bool Fixed::operator<(Fixed const & source) const {
	return (this->_rawBits < source.getRawBits());
}

bool Fixed::operator>=(Fixed const & source) const {
	return (this->_rawBits >= source.getRawBits());
}

bool Fixed::operator<=(Fixed const & source) const {
	return (this->_rawBits <= source.getRawBits());
}

bool Fixed::operator==(Fixed const & source) const {
	return (this->_rawBits == source.getRawBits());
}

bool Fixed::operator!=(Fixed const & source) const {
	return (this->_rawBits != source.getRawBits());
}

Fixed Fixed::operator++(){
	this->_rawBits += 1;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	this->_rawBits += 1;
	return (tmp);
}

Fixed Fixed::operator--(){
	this->_rawBits -= 1;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	this->_rawBits -= 1;
	return (tmp);
}

////////////// ACCESSORS //////////////////

int Fixed::getRawBits( void ) const{
	return (this->_rawBits);
}

void Fixed::setRawBits( int const raw ){
	this->_rawBits = raw;
	return;
}

////////////// METHODS //////////////////

float Fixed::toFloat( void ) const{
	return static_cast<float>(this->_rawBits) / (1 << _fract);
}

int Fixed::toInt( void ) const{
	return (this->_rawBits / (1 << _fract));
}

Fixed const & Fixed::min(Fixed const & cmp1, Fixed const & cmp2) {
	return(cmp1 < cmp2 ? cmp1 : cmp2);
}

Fixed const & Fixed::max(Fixed const & cmp1, Fixed const & cmp2) {
	return(cmp1 > cmp2 ? cmp1 : cmp2);
}

Fixed & Fixed::min(Fixed & cmp1, Fixed & cmp2) {
	return(cmp1 < cmp2 ? cmp1 : cmp2);
}

Fixed & Fixed::max(Fixed & cmp1, Fixed & cmp2) {
	return(cmp1 > cmp2 ? cmp1 : cmp2);
}



