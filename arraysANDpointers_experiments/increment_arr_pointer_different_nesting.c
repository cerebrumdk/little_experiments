/*
 * Script showcasing propagation of array through pointer autoincrementation and its pitfalls
 */

#include <stdio.h>

int main()
{
	int arr[2][2] = {{1, 2}, {3, 4}};
	int (*ptr)[2][2] = &arr;

	printf("first: %d, addr: %p, index_addr: %p\n", ***ptr, &***ptr, &arr[0][0]);
	int *p = **ptr; // below explained why you need lvalue and then use unary operators 
	
	p++;
	 /*
	 * **ptr++; 
	 * that expression parses as **(ptr++), 
	 * because a postfix operator always takes precedence over a prefix operator. 
	 * it doesn't get right inboxng because ++ has bigger importance I guess, but with () it errors
	 * 
	 * ptr is a pointer to an array of two 2-element arrays (i.e., int (*ptr)[2][2]).
	 * When you do (**ptr)++, you are attempting to increment the value pointed to by ptr,
	 * but the dereferencing results in an rvalue (a temporary result of the dereferencing operation),
	 * which cannot be incremented, since incremention is applicable only to lvalues.
	 */
	printf("(I thought it would be) second(): %d, addr: %p, index_addr: %p,"
	 	"p (second is here): %d\n", ***ptr, &***ptr, &arr[0][1], *p);
	**ptr++;

	printf("third: %d, addr: %p, index_addr: %p\n", ***ptr, &***ptr, &arr[1][0]); 

	return 0;
}

