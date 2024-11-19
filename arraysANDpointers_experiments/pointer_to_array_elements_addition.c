/*
 * Checking either I can add/substract pointers to arrays' element
 */

#include <stdio.h>

int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	int *p1 = &arr[1];
	int *p2 = &arr[2];

	int sub = p2 - p1;
	int neg_sub = p1 - p2;
	// int add = p1 + p2;

	printf("sub = %d\nneg_sub = %d\n", sub, neg_sub);

	return 0;
}

// You can't add.
