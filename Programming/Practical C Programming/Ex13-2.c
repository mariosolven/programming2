/*
Exercise 13-2: Write a function that takes a single string as its argument 
and returns a pointer to the first nonwhite character in the string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *nonwhite(char *string); // finds first nonwhite character in a string

int main()
{
	char string[] = "   Spoiler: Quarantine won't end until the next year."; //random variable for the example
	printf("First none white character in the string is: '%c'\n", *nonwhite(string)); //function call

	return 0;
}

char *nonwhite(char *string)
{
	//while Loop through all characters.
	while (*string != '\0') {
		//if character is nonwhite...
		if (! isspace(*string))
			//...return pointer to this first nonwhite character
			return string;
		++string;
	}

	return string;
}