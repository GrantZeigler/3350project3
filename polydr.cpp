// polydr.cpp
// Copyright by Venu Dasigi

#include "poly.h"
#include <iostream>

using namespace std;

const unsigned int MAX = 50;
int main ()
{
	// Pre: None.
	// Post: Give the user a menu of choices.
	//       Based on what command the user inputs, take
	//       the appropriate action as guaranteed by the menu.
	//       Input is accepted in a case-insensitive manner!
	poly p[MAX];
	char command;
	unsigned char i;
	unsigned char j;
	float e;
	int q;
	//float value;
	void printmenu ();
	do
	{
		printmenu();
		cin >> command;
		switch (command)
		{
		case '?':
			printmenu();
			break;
		case 'H':
			printmenu();
			break;
		case 'h':
			printmenu();
			break;
		case 'R':
			cout << "Input Location ";
			cin >> i;
			p[i].read();
			break;
		case 'r':
			cout << "Input Location: ";
			cin >> i;
			p[i].read();
			break;
		case 'p':
			cout << "Location of Polynomial to Print: ";
			cin >> i;
			p[i].write();
			break;
		case 'P':
			cout << "Location of Polynomial to Print: ";
			cin >> i;
			p[i].write();
			break;
		case '+':
			cout << "Polynomial 1 Location:";
			cin >> i;
			cout << "Polynomial 2 Location:";
			cin >> j;
			cout << "Location of Result: ";
			cin >> q;
		//	p[q] = p[i].plus(p[j]);
			break;
		case '-':
			cout << "Polynomial 1 Location: ";
			cin >> i;
			cout << "Polynomial 2 Location: ";
			cin >> j;
			cout << "Location of Result: ";
			cin >> q;
		//	p[q] = p[i].minus(p[j]);
			break;
		case 'e':
			cout << "Polynomial Location: ";
			cin >> i;
			cout << "Variable Value: ";
			cin >> e;
		//	cout << "Answer is: " << p[i].evaluate(e) << endl;
			break;
		case 'E':
			cout << "Polynomial Location: ";
			cin >> i;
			cout << "Variable Value: ";
			cin >> e;
		//	cout << "Answer is: " << p[i].evaluate(e) << endl;
			break;
		case 'q':
			break;
		case 'Q':
			break;
		};
	} while ((command != 'Q') && (command != 'q'));

	system("pause");
	return 0;
};

void printmenu()
{
	// Pre: None.
	// Post: Print a menu of choices.

	cout << "Available commands :" << endl;
	cout << "? : to print this menu " << endl;
	cout << "H : to print this menu" << endl;
	cout << "R : Read and save a new polynomial" << endl;
	cout << "P : Print a saved polynomial" << endl;
	cout << "+ : Add together two saved polynomials and save the result" << endl;
	cout << "- : Subtract two polynomials and save the result" << endl;
	cout << "E : Evaluate a saved polynomial with a user set variable value " << endl;
	cout << "Q : to quit" << endl;
	cout << "Choice: ";
};
