// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double  e, sum = 0, sl1, sl2;
	int n = 0;
	cout << "e=";  
	cin >> e;
	sl2 = -27;
	do
	{
		n++;
		sl1 = 1./ sqrt(n);
		sl2 *= -1. / 9;
		sum += sl1*sl2;
	} 
	while (abs(sl2*sl1)>=e);
	cout <<setprecision(10) << sum << endl;
    return 0;
}

