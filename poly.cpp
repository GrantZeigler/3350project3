//poly.cpp
//Grant Zeigler
#include <cassert>
#include <iostream>
#include "poly.h"

using namespace std;

namespace main_savitch_5
{
	void poly::copy(const poly& p)
	{
		// Pre: p is a valid polynomial.
		// Post: p is copied into the implicit parameter.

		nterms = p.nterms;
		terms = new term[MAXSIZE = p.MAXSIZE];
		for (unsigned int i = 0; i < nterms; i++)
			terms[i] = p.terms[i];
	};

	poly::poly(const poly& p) //DEEP COPY SEMANTICS
	{
		// Pre: p is a valid polynomial.
		// Post: p is copied into the implicit parameter
		// using "deep copy semantics."

		copy(p);
	};



















}