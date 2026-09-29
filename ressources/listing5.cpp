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

Vector CreateVector(const Vector &v)
{
	Vector vec(v);
	
	return(vec);
}

int main()
{
	Vector v1;
	v1 = CreateVector(4, 1.0, 2.0, 3.0, 4.0);

	Vector v2;
	v2 = CreateVector(v1);
}
