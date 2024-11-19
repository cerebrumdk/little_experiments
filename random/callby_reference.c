/*
 * Lil script to check how Call by ref and call by val work
 */

#include <stdio.h>

void swap(int *i, int *j){
	int temp = *i;
	
	*i = *j;
	*j = temp;
	printf("swapped\n");
}

int main(){
	int a = 2;
	int b = 5;
	printf("a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
