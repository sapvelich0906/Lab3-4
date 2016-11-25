// Massive2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int **p;
	int n, m;
	int i, j, k;
	printf_s("n=");
	scanf_s("%d", &n);
	printf_s("m=");
    scanf_s("%d", &m);

	p = (int **)malloc(n * sizeof(int *));
    for (i = 0; i<n; i++)
		p[i] = (int *)malloc(m * sizeof(int));
        for (i = 0; i<n; i++) 
		{
			for (j = 0; j<m; j++) 
			{
				p[i][j] = rand() % 100;
				printf_s("%d ", p[i][j]);
			}
			printf_s("\n");
		}
		printf_s("\n");
		printf_s("<50");
		printf_s(" >=50");
		printf_s("\n");
		for (i = 0; i<n; i++)
		{
			k = 0;
			for (j = 0; j < m; j++)
				if (p[i][j] < 50)
					k++;
			printf_s(" %d ", k);
			printf_s("  %d ", m-k );
			printf_s("\n");
		}
		for (i = 0; i<n; i++)
			free(p[i]);

	free(p);
		system("pause");
	return 0;
}
