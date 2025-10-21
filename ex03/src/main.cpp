#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main( void ) {

	Point a (1.0, 1.0);
	Point b (10.0, 10.0);
	Point c (10.0, 1.0);
	Point P (5.0, 1.1);

if (bsp( a, b, c, P))
	std::cout << "le point se situe a l'interieur du triangle" << std::endl;
else 	
	std::cout << "le point n'est pas dans le triangle" << std::endl;
return 0;
}




