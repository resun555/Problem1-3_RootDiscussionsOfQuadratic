// Problem1-3_RootDiscussionsOfQuadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	double _linear_term_coefficient;
	scanf("%lf", &_linear_term_coefficient);
	double _constant_term;
	scanf("%lf", &_constant_term);
	double delta = _linear_term_coefficient * _linear_term_coefficient - 4. * _constant_term;
	if (delta > 0.)
	{
		printf("Two unequal real roots.");
	}
	else if (delta == 0.)
	{
		printf("Two equal real roots.");
	}
	else
	{
		printf("A pair of complex conjugate roots.");
	}
    return 0;
}

