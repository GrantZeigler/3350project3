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
		copy(hold);
	};

	void poly::copy(const poly& hold)
	{
		terms->set_data(hold.terms->data());
	};

	void poly::free()
	{
		list_clear(terms);
	}

	poly& poly::operator= (const poly& p)
	{
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

	void poly::read()
	{
		poly temp;
		int coeff;
		int exp;
		cout << "Input a polynomial by first specifying the variable and then the terms in any order." << endl
			<< "Each term is specified by an integer coefficient and" << endl
			<< "a non-negative integer exponent." << endl
			<< "Indicate END by specifying a dummy term with" << endl
			<< "a zero coefficient and/or a negative exponent." << endl;

		cin >> temp.variable;
		do
		{
			cin >> coeff;
			if (coeff)
			{
				cin >> exp;
				if (exp >= 0)
					temp.InsertTermSorted(term(coeff, exp));
			}
			else
				while (cin && (cin.peek() != '\n')) cin.ignore();
		} while (coeff && (exp >= 0));
		*this = temp; // The assignment operator is being called here!
	};

	void poly::write() const
	{
		char var = this->variable;

		int i = 0;
		while (i < list_length(terms))
		{
			
		}
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
	
	void poly::InsertTermSorted(term t)
	{

	};
	
