#ifndef Fixed_HPP
# define Fixed_HPP
#include <iostream>
# include <cmath>

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"
#define BOLD	"\033[1m"
#define PINK	"\033[95m"
#define LPINK	"\033[38;5;218m"
#define PURPLE	"\033[35m"
#define LPURPLE "\033[38;5;141m"
#define RED		"\033[31m"

class Fixed {

private :
    int _rawBits;
	static int const _fract;
	
public :
	//constructors	
	Fixed(void);
    Fixed(int const nbint);
	Fixed(float const nbfloat);
	Fixed(Fixed const & nb); // constructeur par copie
	~Fixed(void);
    
	//operators
	Fixed & operator=(Fixed const & source); // surcharge operateur affectation
	Fixed & operator<<(Fixed const & source);
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	Fixed operator+(Fixed const & source);
	Fixed operator-(Fixed const & source);
	Fixed operator*(Fixed const & source);
	Fixed operator/(Fixed const & source);
	bool operator>(Fixed const & source) const;
	bool operator<(Fixed const & source) const;
	bool operator>=(Fixed const & source) const;
	bool operator<=(Fixed const & source) const;
	bool operator==(Fixed const & source) const;
	bool operator!=(Fixed const & source) const;

	//accessors
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	//methods
	float toFloat( void ) const;
	int toInt( void ) const;

	//ajout
	static Fixed const & min(Fixed const & cmp1, Fixed const & cmp2);
	static Fixed const & max(Fixed const & cmp1, Fixed const & cmp2);
	static Fixed & min(Fixed & cmp1, Fixed & cmp2);
	static Fixed & max(Fixed & cmp1, Fixed & cmp2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &source);


#endif










