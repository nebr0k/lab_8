#include <iostream>
#include"Alcohol.h"
using namespace std;

int main()
{
	Liquid al("whiskey", 940);
	Alcohol st1(al, 39);
	cout << st1 << endl;
	cin >> st1;
	cout << st1 << endl;
}
