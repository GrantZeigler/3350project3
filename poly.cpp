//poly.cpp
//Grant Zeigler
#include <cassert>
#include <iostream>
#include "poly.h"

using namespace std;

	poly::poly()
	{
		variable = 'x';
		this->terms = new node;
	};

	poly::poly(const poly& hold)
	{
		variable = hold.variable;
		terms = hold.terms;
	};

	void poly::free()
	{
		delete [] terms;
		terms = NULL;
	}

	poly& poly::operator= (const poly& p) //DEEP COPY SEMANTICS
	{
		// Pre: p is a valid polynomial.
		// Post: The value of p is assigned to the implicit parameter
		// by "deep copy semantics."  Any necessary deallocation is
		// done along the way.

		if (this != &p)
		{
			free();
			copy(p);
		};
		return (*this);
	};


	poly::~poly()
	{
		free();
	};

	poly& poly::operator= (const poly&)
	{

	}
	void poly::read()
	{

	};
	void poly::write() const
	{

	};
	poly poly::plus(poly) const
	{

	};
	poly poly::minus(poly) const
	{

	};
	float poly::evaluate(float) const
	{

	};