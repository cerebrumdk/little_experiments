/*
 * Little script to accept only numeric input, continuously
 * 
 * I added it to flashcards long time ago,
 * probably to check how well I can apply the fact that
 * scanf returns >0 if it scanned successfully at least one input
 * 
 * ANd then I marked the flash card red, probably got confused 
 * and decided to check if it works...
 *
 * It works :)
 */

#include <stdio.h>

int main()
{
	int x = 0;
	for(int i = 1; scanf("%d", &x) == 1; i++){
		printf("%d) %d\n", i, x);
	}
	return 0;
}

