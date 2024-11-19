/*
 * A program to check how scanf handles specific cases of white spaces
 */

#include <stdio.h>

int main()
{
	char input[30];
	int x = 0;
	
	char input2[30];
	int y = 0;
	
	char input_white_spaces[30];
	char input_white_spaces_second_part[30];
	int z = 0;
	int end = 0;
	// Chat GPT told me that C will figure out how to seperate
	// "JohnDoe85"
	// And I believed him without even trying to think for a sec
	// It's really emeberassing lol
	//
	// Never trust robots!!	
	scanf("%s%d", input, &x);   
	printf("input: %s\nx: %d\n", input, x);
	
	// "85JohnDoe" Works just fine
	scanf("%d%s", &y, input2);   
	printf("input: %s\nx: %d\n", input2, y);
	
	// "John Doe is 35 and you are 23"
	// Not sure why I asked myself how to handle it with more than 2 values, 
	// but here we are...
	scanf("%[^0-9] %d%[^0-9] %d", input_white_spaces, &z, input_white_spaces_second_part, &end);
	printf("input_white_spaces: %s\nz: %d\ninput_white_spaces_second_part: %s\nend: %d",
			input_white_spaces, z, input_white_spaces_second_part, end);
	return 0;
}

/*
 * OUTPUT
 *JohnDoe85 0
 *input: JohnDoe85
 *x: 0
 *85JohnDoe
 *input: JohnDoe
 *x: 85
 *John Doe is 35 and you are 23
 *input_white_spaces:
 *John Doe is
 *z: 35
 *input_white_spaces_second_part:  and you are
 *end: 23
 */
