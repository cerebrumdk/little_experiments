/*
 * As a name suggests, I'm getting addresses of elements of an array...
 * Yeah,  thought it's cool and wanted to check it out, so what?
 */

#include <stdio.h>

int main()
{
	int arr[2][2] = {{1, 2}, {3, 4}};

	printf("first: %p, last: %p\n", &arr[0][0], &arr[2][2]);	
	return 0;
}
