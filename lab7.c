#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "lab7.h"

int main()
{
    int size_of_array;
    printf("Input array's size: ");
    scanf("%d", &size_of_array);
    float *arr1 = get_array(size_of_array);
    float *arr2 = get_array(size_of_array);
    float *arr3 = get_array(size_of_array);
    max_array(arr1, arr2, size_of_array);
    max_array(arr2, arr3, size_of_array);
    print_array(arr1, size_of_array);
    print_array(arr2, size_of_array);
    return 0;
}