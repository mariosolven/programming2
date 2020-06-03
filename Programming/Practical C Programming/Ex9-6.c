/* Exercise 9-6: Write a function that scans a character array for the character - and replaces it with _. */

#include <stdio.h>

void replace(char *array){
	int i;

	for (i = 0; i < sizeof(array); i ++){
		if (array[i] == '-'){
			array[i] = '_';
		}
	}
}

int main(){
	int i;

	char list[] = { 's', 't', 'd', 'i', 'o', '-', 'h' };
	replace(list);

	for (i = 0; i < sizeof(list); i ++){
		printf("%c", list[i]);
	}
	return 0;
}
