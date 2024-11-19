/*
 * I was trying to figure out how I can traverse
 * through multiD arrays using one loop and pointers
 */

#include <stdio.h>

int main()
{	
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	// int (*ptr_whole)[2][3] = &arr;
	int *ptr_element = &arr[0][0];
	/*
	printf("*ptr_whole propagation\n");
	for(**ptr_whole; **ptr_whole <= &arr[1][2]; **ptr_whole++){ // you can't do it, you do **(ptr_whole++) instead
		printf("%d ", ***ptr_whole);
	}
	printf("  ___\n");
	*/
	printf("*ptr_element propagation\n");
        for(ptr_element; ptr_element <= &arr[1][2]; ptr_element++){
                printf("value = %d, addr = %p\n", *ptr_element, ptr_element);
        }
	return 0;
}

// think of every interesting inboxing you can do with &a[0][0]
