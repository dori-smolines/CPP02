#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"


//calcul vectoriel pour chaque couple de point
static Point calcVect (Point const a, Point const b) {
	Fixed abx = b.getX() - a.getX();
	Fixed aby = b.getY() - a.getY();
	Point newPoint (abx.toFloat(), aby.toFloat());
	return(newPoint);
}

//calcul du produit vectoriel scalaire de chaque cote du triangle par rapport au point P
// = 2* aire du nouveau triangle, le signe indique de quel cote du segment se trouve P
static Fixed cross(Point const a, Point const b) {
	Fixed cross = a.getX() * b.getY() - a.getY() * b.getX();
	return cross;
}

//Tous les produits vectoriels avoir le meme signe et etre differentes de 0
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point ab = calcVect(a, b);
	Point ap = calcVect(a, point);
	Point bc = calcVect(b, c);
	Point bp = calcVect(b, point);
	Point ca = calcVect(c, a);
	Point cp = calcVect(c, point);
	if ((cross(ab, ap) > 0 && cross(bc, bp) > 0 && cross(ca, cp) > 0)
    || (cross(ab, ap) < 0 && cross(bc, bp) < 0 && cross(ca, cp) < 0))
		return (true);
	else	return (false);
}

