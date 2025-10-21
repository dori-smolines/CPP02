#include "../includes/Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << "a= " << a << std::endl;
//std::cout << b << std::endl;
//std::cout << "a++= " << a++ << std::endl;

std::cout << "++a= " << ++a << std::endl;
std::cout << "a= " << a << std::endl;
std::cout << "a++= " << a++ << std::endl;
std::cout << "a= " << a << std::endl;
std::cout << "b= " << b << std::endl;
std::cout << "max de a, b = " << Fixed::max( a, b ) << std::endl;
std::cout << "a+b= " << a + b << std::endl;

int c = 10;
float d = 10.1;
Fixed fc (c);
Fixed fd(d);
std::cout << "fc= " << c << std::endl;
std::cout << "fd= " << d << std::endl;


return 0;
}



