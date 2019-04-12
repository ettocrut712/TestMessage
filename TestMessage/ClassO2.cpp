#include "stdafx.h"
#include "ClassO2.h"
// changement 1 fait dans github 10:41

ClassO2::ClassO2()
{
}


ClassO2::~ClassO2()
{
}

ClassO1::ClassO1()
{
}


ClassO1::~ClassO1()
{
}

void ClassO2::jeTravaillePourO2()
{
	cout << "je suis au service de toutes les classes" << endl;
};


ClassO1::ClassO1(ClassO2 *lienO2)
{
	this->lienO2 = lienO2;

};

void ClassO1::jeTravaillePourO1()
{

	lienO2->jeTravaillePourO2();
};

int ClassO1::uneAutreMethode(int a)
{
	return a;

};
