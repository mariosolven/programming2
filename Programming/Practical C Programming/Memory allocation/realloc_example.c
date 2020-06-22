#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max, new_max;
    int *ptr;

    
    printf("Enter total number of elements: "); // Input max elements of the array.
    scanf("%d", &max);
    
    
    ptr = (int *) calloc(max, sizeof(int)); // allocating memory for 'max' integer elements using calloc.
    
    //If memory cannot be allocated, exit the program.
    if(ptr == NULL) 
    {
        printf("Error, memory not allocated.");
        exit(0);
    }
    
    // Input elements from user
    printf("Enter the %d elements: \n", max);
    for (i = 0; i < max; i++)
        scanf("%d", (ptr + i));

    // Reallocating memory to input more elements into the array.
    printf("Enter the new size of the array:\n ");
    scanf("%d", &new_max);
    ptr = (int *) realloc(ptr, (new_max * sizeof(int)));

    
    // Input the new elements in the allocated memory.
    printf("Enter the new %d elements: \n", (new_max - max));
    for (i = max; i < new_max; i++)
        scanf("%d", (ptr + i));
    
    printf("The updated array elements are: \n"); //printing results.
    for (i = 0; i < new_max; i++)
        printf("%d ", *(ptr + i));
    
    free(ptr); //deallocating the memory.
    
    return 0;
}