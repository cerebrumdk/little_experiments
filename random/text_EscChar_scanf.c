/*
 * A script to check what text and \n do when used in scanf();
 *
 *
 * I decided to check one of my old flashcards, cause it looked fishy
 * Also, for all my experience I never thought why we can write text in scanf
 * Does it print it?
 *
 * TLTR: it doesn't print it, instead, everything in braces represents an input
 * So, if you put text in scanf(""), be prepeared to type same text for input lol
 *
 * About flashcards, it looked like this:
 * Q: What happens if we use /n in scanf?
 * A: Scanf will store everything until new line, everything after will be erased
 *
 * Turned out whitespaces will be skipped, which is cool and makes a lot of sense 
 *
 * Sometimes I can't believe how stupid I am
 * See ya!
 */

#include <stdio.h>

int main()
{
	int number;
	int after_newline_dec;
	char char_after_newline; 
	scanf("text print, %d \n Check if prints here and if %c%d gets assigned",
				&number, &char_after_newline, &after_newline_dec);
	printf("\nnumber = %d, after_newline_dec = %d, char_after_newline = %c\n", 
			number, after_newline_dec, char_after_newline);	
	return 0;
}
