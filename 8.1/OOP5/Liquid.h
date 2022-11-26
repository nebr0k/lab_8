#pragma once
#include<iostream>
#include<string>
using namespace std;
class Liquid
{
private:
	string name;
	int density;
	
public:
	Liquid(string , int  );
	Liquid();
	void setName(string);
	void setDensity(int);
	

	string getName();
	int getDensity();


	friend ostream& operator << (ostream&, Liquid&);
	friend istream& operator >> (istream&, Liquid&);
};

