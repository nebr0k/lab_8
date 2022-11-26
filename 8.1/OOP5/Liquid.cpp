#include "Liquid.h"

Liquid::Liquid(string name, int density)
{
	this->name = name;
	this->density = density;
	
}

Liquid::Liquid()
{
	this->name = "";
	this->density = 0;
	
}

void Liquid::setName(string name)
{
	this->name = name;
}

void Liquid::setDensity(int density)
{
	this->density = density;
}



string Liquid::getName()
{
	return this->name;
}

int Liquid::getDensity()
{
	return this->density;
}




ostream& operator<<(ostream& out, Liquid& alcohol)
{
	out << string("name: " + alcohol.name
		+ "\ndensity: " + to_string(alcohol.density)+"\n");
	return out;
}

istream& operator>>(istream& in, Liquid& alcohol)
{
	
	cout << "density: "; in >> alcohol.density;
	
	return in;
}
