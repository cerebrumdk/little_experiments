/*
 * I thought we can't autoincrement a pointer while dreferencing,
 * but I guess it doesn't work (properly) only with multi-pointers, because 
 * 
 * **ptr++ will work, but it will 
 */
#include <stdio.h>

int main()
{
	int arr[3] = {0, 1, 2};
	int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

	int *ptr = &arr[0];
	int (*p_multi)[2][3] = &arr2d;

	// autoincrement with ptr to 1D array:
	printf("*ptr = %d, (0?)\n", *ptr);
	printf("*ptr++ = %d, (0?)\n", *ptr++);
	printf("*++ptr = %d, (2?)\n", *++ptr);
	
	// autoincrement with ptr to MULTID
	printf("***p_multi = %d\n", ***p_multi);
	printf("*(**p_multi)++ = %d\n", *(**p_multi)++);
	printf("*++(**p_multi)", *++(**p_multi));
	/* 
	 * ***p_multi = %d\n*");
	 */
	return 0;
}
