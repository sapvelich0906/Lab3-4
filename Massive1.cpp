// Massive1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <tchar.h>
#include <stdlib.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])

{

	int *p, n, i, j,sum;
	
        cout << "n=";
	
        cin >> n;
		
	
        p = (int *)malloc(n * sizeof(int));
	
        for (i = 0; i<n; i++) 
	
        {

           p[i] = rand() % 100;

	   cout << p[i] << " ";

	}

	for (i = n-1; i>=1; i--)

		if (p[i]<50)
 
		{

			j = i - 1;

			sum = 0;

			while (p[j] >= 50 && j >= 0)

			{

				sum += p[j];

				j--;

			}

			p[i] = sum;

		}

	cout << endl;
	for (i = 0; i<n; i++)
		cout<< p[i] << " ";

	free(p);

	system("pause");


	return 0;

}