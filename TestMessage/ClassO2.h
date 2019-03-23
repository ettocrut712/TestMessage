#pragma once
#include <iostream>
using namespace std;

class ClassO2
{
public:
	ClassO2();
	~ClassO2();

private:
	int unAttribut2;
	double unAutreAttribut2;

public:
	void jeTravaillePourO2();
	
};


class ClassO1
{
public:
	ClassO1();
	~ClassO1();

private:
	int unAttribut;
	int unAutreAttribut;
	ClassO2 *lienO2;

public:

	ClassO1(ClassO2 *lienO2);

	void jeTravaillePourO1();

	int uneAutreMethode(int a);

};

//22 mars texte ajouté...

// 22 mars texte qu'on veut retirer...
// Version 1

/ version originale

// version 3 en cours et bonne...


// V 4 et a ne pas conserver...  et retir/ a 19h16 

// il est maintenant 21:14

// 21:17 maintenant

//Branche 1

// Branche 1 + 1


