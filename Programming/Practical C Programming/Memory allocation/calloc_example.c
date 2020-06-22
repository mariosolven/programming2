#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{    
int i, num;
int * array;
printf("Enter the num of integers to be stored:\n "); //asking for the total amount of values to be stored in the array
scanf("%d", &num);

printf("Enter the %d integers in the array:\n ", num); //asking to input each element
array = (int *) calloc (num, sizeof(int)); //calloc function to allocate the block of memory into the array.
if(array == NULL) {
    printf("Memory not avaliable."); //if memory cannot be allocated.
    exit(1);
}
for(i = 0; i < num; i++) {
    printf("Element #%d: ", i+1); //printing each value.
    scanf("%d", &array[i]);
    }
    printf ("The values are: \n");
		for (i = 0; i < num; i++)
			printf ("%d ", array[i]);
		free (array); //deallocating memory.
        printf("\n\n");

		return 0;
}