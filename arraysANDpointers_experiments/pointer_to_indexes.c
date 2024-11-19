/*
 * Just trying  to make pointers to different indexes and see how it goes
 */

#include <stdio.h>

int main()
{
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int *ptr_one = &arr[0][1]; // Shouldn't forget to start from zeroth in multiD, ahah
	int *ptr_five = &arr[1][1];
	int (*ptr_second_row)[3] = &arr[1]; // should be a pointer to the second row
	// you can't do arr[1] 
	// initialization of ‘int (*)[3]’ from incompatible pointer type ‘int *’
	
	// because by indexing first row (arr is a first row) - you get pointer to int in a row,
	// not 3 ints
	int *ptr_no_ampersand_secondrow_element_addr = arr[1]; // this one here works perfectly. 
	
	printf("Zeroth element: address = %p; value = %d\n", arr, arr[0][0]);
	printf("First element: address = %p; value = %d\n", ptr_one, *ptr_one);
	printf("Fifth element: address = %p; value = %d\n", ptr_five, *ptr_five);
	printf("Second Row: row's address = %p; row's first element addr = %p value = %d\n",
		       		ptr_second_row, *ptr_second_row, **ptr_second_row);
	printf("Second row's first element addr = %p, value = %d\n", 
		ptr_no_ampersand_secondrow_element_addr, *ptr_no_ampersand_secondrow_element_addr);

	return 0;
}

/*
 * Zeroth element: address = 0x7fffcbb44cf0; value = 1
 * First element: address = 0x7fffcbb44cf4; value = 2
 * Fifth element: address = 0x7fffcbb44d00; value = 5
 * Second Row: row's address = 0x7fffcbb44cfc; row's first element addr = 0x7fffcbb44cfc value = 4
 * Second row's first element addr = 0x7fffcbb44cfc, value = 4
 */
