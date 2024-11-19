/*
 * A small task from book that shows how to methods of calculating avg can differ vastly
 * At big enough values navg goues out of its type boundaries during calculation, while avg works just fine.
 */

#include <stdio.h>

int main(void)
{
	int i;
	double x;
	double avg = 0.0;
	double navg;
	double sum = 0.0;
	FILE* fp;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n", 
		"Count", "Item", "Avg", "Naive avg", 
		"____", "____", "____", "____");
	
	fp = fopen("data.txt", "r");
	
	if(fp == NULL){
		printf("File doesn't exist");
		return 1;
	}

	for(i = 1; fscanf(fp, "%lf", &x) != EOF; ++i){
		avg += (x - avg)/i;
		sum += x;
		printf("\nSum = %lf\n", sum);
		navg = sum/i;
		printf("%5d%17e%17e%17e\n", i, x, avg, navg);
	}
	fclose(fp);
	return 0;
}

