/*
 * Script showcasing pointer arithmetic
 */

#include <stdio.h>

int main()
{
	int arr[10] = {[1]=5};

	printf("%d\n", *(arr + 1));
	// printf("%d\n", *(&arr + 4));
	/* When you add 4 to &arr, 
	 * you are incrementing the pointer by 4 arrays (not elements),
	 * which is incorrect in this case.
	 */
	printf("%d\n", *(&arr[0] + 4));
	
	printf("%d\n", arr[1]);

	return 0;
}
