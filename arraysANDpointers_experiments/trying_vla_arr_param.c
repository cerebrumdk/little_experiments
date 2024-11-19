/*
 * I think I was exploring VLA here and
 * through trial and error figured out that 
 * I need initializer and pass size as a parameter
 * Sad that I didn't comment out all failed attempts for memories
 */
#include <stdio.h>


void fun_arr(int size_p, int arr_f[size_p])
{
	for (int i = 0; i < size_p; i++){
		printf("%d\n", arr_f[i]);
	}

}

int main()
{
	// static int SIZE = 5;
	
	int size = 5; 

	int arr[size];
	
	for(int i = 0; i < size; i++){
		arr[i] = i + 1;
	}

	fun_arr(size, arr);
	return 0;
}
