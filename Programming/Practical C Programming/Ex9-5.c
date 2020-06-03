/* Exercise 9-5: Write a function that returns the maximum value of an array of numbers. */

#include <stdio.h>

int max_val(int num[]){
int i, max;

max = num[0];
    for (i = 0; i <= 3; i ++){
        if (num[i] > max){
            max = num[i];
        }
    }
return max;
}

int main (){
    int nums_list [3] = {2049,249,49};
    printf("Maximum value: %i", max_val(nums_list));

    return 0;
}