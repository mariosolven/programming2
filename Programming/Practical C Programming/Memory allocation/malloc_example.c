#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int *ptr;
    
    ptr = 111; //establishing a value for pointer.
    printf("Pointer before malloc(): %p\n", ptr);
    ptr = (int *)malloc(sizeof(int)); //allocating memory with malloc.

    printf("Pointer after malloc(): %p\n", ptr); //showing difference at printing.
    return (0);
}
