#include "Alcohol.h"

Alcohol::Alcohol()
{
	this->alcohol = Liquid();
}

Alcohol::Alcohol(Liquid alcohol, int strength)
{
	this->alcohol = alcohol;
	this->strength = strength;
}

Alcohol::Alcohol(string name, int density,  int strength)
{
	this->alcohol = Liquid(name, density);
	this->strength = strength;
}

Liquid Alcohol::getalcohol()
{
	return this->alcohol;
}

int Alcohol::getStrength()
{
	return this->strength;
}

void Alcohol::yearIncrease()
{
	this->strength++;
}

void Alcohol::setStrength(int strength)
{
	this->strength = strength;
}

void Alcohol::setalcohol(Liquid alcohol)
{
	this->alcohol = alcohol;
}

ostream& operator<<(ostream& out, Alcohol& student)
{
	out << student.alcohol << "strength: " << student.strength<<"\n";
	return out;
}

istream& operator>>(istream& in , Alcohol& student)
{
	in >> student.alcohol;
	cout << "strength: "; in >> student.strength;
	cout << endl;
	return in;
}
