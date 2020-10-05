#ifndef POLY_H
#define POLY_H
#include "node.h"

using namespace main_savitch_5;
class poly
{
public:
	poly();
	poly (const poly &);
	~poly ();
	poly & operator= (const poly &);
	void read ();
	void write () const;
	poly plus (poly) const;
	poly minus (poly) const;
	float evaluate (float) const;
private:
	node * terms;
	char variable;

	void copy (const poly &);
	void free ();
	void InsertTermSorted (term);
};
#endif
