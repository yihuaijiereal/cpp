#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	int sum;

	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
	return sum;
}
