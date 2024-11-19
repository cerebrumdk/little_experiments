/* 
 * In this little program should lie a secret of arr and &arr,
 * as well as how compilar distinguishes data_types-pointers_to_them,
 * or rather how it boxes them and general use of pointers to multiD arr
 *
 * Edited: damn man, you really thought you are onto something big, lmao
 */

#include <stdio.h>

int main()
{
	int arr[1][2][3] = {{{1, 2, 3}, {4, 5, 6}}};
	int (*ptr)[1][2][3] = &arr;
	int (*ptr_multi_amp)[2][3] = arr; 	

	printf("%d, %d\n", ****ptr, ***ptr_multi_amp);

	
	int one_d[2] = {1, 2};
	int *ptr_one = one_d;
	int (*ptr_one_amper)[2] = &one_d;

	printf("%d, %d\n", *ptr_one, **ptr_one_amper);

	return 0;
}

// 
