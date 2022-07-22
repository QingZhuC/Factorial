#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void Factorial(int input,int* pend)
{
	if (input != 1)
	{
		Factorial(input - 1, pend);
	}
	*pend = (*pend) * input;
}

int main()
{
	unsigned int input = 0;
	int end = 1;
	scanf("%d", &input);
	Factorial(input,&end);
	printf("%d", end);
	return 0;
}