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




