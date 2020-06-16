/*
Exercise 13-1: Write a program that uses pointers to set each element of an array to zero.
*/

#include <stdio.h>

#define MAX_NUMS 5 //max size fot the array

int main()
{
	int numbers[MAX_NUMS] = {1, 3, 6, 7, 10}; //asigning values to the array
	int *ptr_to_num; //pointer to numbers array

	for (ptr_to_num = &numbers[0]; ptr_to_num < &numbers[MAX_NUMS]; ++ptr_to_num) { //iterate over the array to set elements into zero.
		*ptr_to_num = 0;
	}

	int counter;

	for (counter = 0; counter < MAX_NUMS; ++counter) { //to convert each element of the array
		printf("Number [%d] = %d\n", counter, numbers[counter]); //printing
	}

	return 0;
}