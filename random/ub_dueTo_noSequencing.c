/*
 * Showcasing Undefined behaviour due to no sequencing
 * functions like printf don't have an order of execution, so if you pile up
 * expressions that change one value, it may get messy without sequencing
 */

#include <stdio.h>

int main()
{
	int arr[4] = {1, 2, 3, 4};
	int *ptr_noSeq = &arr[0];
	int *ptr_seq = &arr[0];

	printf("ptr_noSeq = %p, &arr[0] = %p\n", ptr_noSeq, &arr);
	printf("*ptr_noSeq = %d\n", *ptr_noSeq);
	printf("Not sequenced expressions:\n");
	printf("%d, %d, %d\n", *ptr_noSeq, *ptr_noSeq++, *++ptr_noSeq);
	
	printf("\nSequenced expressions:\n");
	printf("*ptr_seq = %d\n", *ptr_seq);
	printf("*ptr_seq++ = %d\n", *ptr_seq++);
	printf("*++ptr_seq = %d\n", *++ptr_seq);

	return 0;
}

/*
 * Output:
 * ptr_noSeq = 0x7fffc3d09e80, &arr[0] = 0x7fffc3d09e80
 * *ptr_noSeq = 1
 * Not sequenced expressions:
 * 3, 2, 2
 *
 * Sequenced expressions:
 * *ptr_seq = 1
 * *ptr_seq++ = 1
 * *++ptr_seq = 3
 */
