/* Exercise 9-2: Write a function begins(string1,string2)
that returns true if string1 begins string2. 
Write a program to test the function. */

#include <stdio.h>

int begins(char string1[], char string2[]){
	int i = 0;

	while (1)
    {
	
		if (string1[i] == 0){
			return 1;
		}

		if (string1[i] != string2[i]){
			return 0;
		}
		i ++;
	}
}

int main(){

	if (begins("MacBookAir", "MacBook")){
		printf("True");
	} else {
		printf("False");
	}

	return 0;
}