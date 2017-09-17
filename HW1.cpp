//Emily Lukshin
//HW!
//September 17 2017

#include<iostream>
using std::cout;
using std::endl;

template <class T>
T add(T x, T y)
{
	return x + y;
}

int main()
{
	int a = 4;
	int b = 7;
	double c = 5.32;
	double d = 0.93;

	cout << "The sum of the integars A and B is " << add(a, b) << endl;
	cout << "The sum of the doubles C and D is " << add(c, d) << endl;
	return 0;
}