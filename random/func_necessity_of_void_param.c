/*
 * Turns out we need to write void if function doesn't have any parameters
 */

#include <stdio.h>

void sum(void);

int main()
{
	// sum(5, 6) Doesn't give an error if we don't include sum(void) in declaration
	// Same if we define it at the top
	sum(5, 6); // error: too many arguments to function ‘sum’
	return 0;
}

void sum()
{
	int a = 2, b = 2, sum = 0;
	
	sum = a + b;
	printf("sum: %d\n", sum);
}

