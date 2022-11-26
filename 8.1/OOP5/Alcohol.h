#pragma once
#include "Liquid.h"
class Alcohol
{
private:
	Liquid alcohol;
	int strength;
public:
	Alcohol();
	Alcohol(Liquid, int);
	Alcohol(string, int, int);

	Liquid getalcohol();
	int getStrength();
	
	void setStrength(int);
	void setalcohol(Liquid);

	void yearIncrease();

	friend ostream& operator << (ostream&, Alcohol&);
	friend istream& operator >> (istream&, Alcohol&);
};

