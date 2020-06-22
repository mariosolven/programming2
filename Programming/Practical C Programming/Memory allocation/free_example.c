#include<stdio.h>
#include<stdlib.h>

	int main()
	{
		int *ptr;

		ptr = (int *)malloc(sizeof(int)); //allocating memory.

		if (ptr == NULL) //if memory cannot be allocated, exit.
		{
			printf("OUT OF MEMORY\n");
			return 1;
		}

		*ptr = 111; //stablishing some value to the memory.
		printf("%d\n", *ptr);

		free(ptr); //deallocating memory.

		return 0;
	}