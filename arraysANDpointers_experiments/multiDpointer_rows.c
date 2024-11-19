/*
 * Checking addresses of different nesting of multiD array
 */

#include <stdio.h>

int main() 
{
	int arr[2][2] = {{1, 2}, {3, 4}};
	int one_d[2] = {1, 2};
	int (*ptr)[2] = arr;
	
	printf("one_d = %d, arr address = %p, arr row addr = %p,\n arr first value = %d, ptr to row first value = %d\n", *one_d, arr, *arr, **arr, **ptr);

	return 0;
}
