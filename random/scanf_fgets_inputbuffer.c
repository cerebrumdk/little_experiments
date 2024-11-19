/*
 * Shwocasing how input functions work with a input buffer  
 */

#include <stdio.h>

int main()
{
	char scf[6];
	char gts[6];

	printf("Please, provide a string with space and 2 symbols on each side of the space\n");
	scanf("%s", scf);
	
	printf("Do it again\n");
	fgets(gts, sizeof(gts), stdin);

	printf("scf: %s\ngts: %s", scf, gts);

	return 0;	
}
/*
 * Output:
 * Please, provide a string with space and 2 symbols on each side of the space
 * as as
 * Do it again
 * scf: as
 * gts:  as
 */
