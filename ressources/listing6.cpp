#include "Vector.h"
#include <stdio.h>
#include <stdarg.h>

Vector CreateVector(unsigned int nb, ...)
{
	va_list marker;
	Vector v;
	
	v.Reserve(nb);
	va_start(marker, nb);
	for (unsigned int i = 0; i < nb; ++i)
	v[i] = va_arg(marker, double);	
	va_end(marker);
	
	return(v);
}

int main()
{
	Vector v1,v2;

	v1=CreateVector(2, 1, 2);
	v2=CreateVector(2, 4, 3);

	double dist;
	dist=Vector::EuclideanDistance(v1,v2);
	printf("La distance euclidienne entre les vecteurs v1 et v2 est %f\n", dist);
}