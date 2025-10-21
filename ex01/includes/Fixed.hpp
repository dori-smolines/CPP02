#ifndef Fixed_HPP
# define Fixed_HPP
#include <iostream>

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
    Fixed(void);
	Fixed(Fixed const & nb); // constructeur par copie
	~Fixed(void);
    Fixed & operator=(Fixed const & source); // surcharge operateur affectation
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	//ajout
    Fixed(int const nbint);
	Fixed(float const nbfloat);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed & operator<<(Fixed const & source);
};

std::ostream &operator<<(std::ostream &out, Fixed const &source);


#endif








