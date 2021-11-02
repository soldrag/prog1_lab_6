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
    float *result;

    printf("First array\t");
    print_array(arr1, size_of_array);

    printf("Second array\t");
    print_array(arr2, size_of_array); 

    result = math_array(arr1, arr2, size_of_array);

    printf("Result array\t");
    print_array(result, size_of_array);
    printf("\n");
    
    printf("Second array\t");
    print_array(arr2, size_of_array);

    printf("Third array\t");
    print_array(arr3, size_of_array);

    result = math_array(arr2, arr3, size_of_array);

    printf("Result array\t");
    print_array(result, size_of_array);

    return 0;
}