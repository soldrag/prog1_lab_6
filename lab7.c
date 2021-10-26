#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_array(float *array, int size_of_array)
{
    for (int i=0; i<size_of_array; i++)
        printf("%.2f\t", array[i]);
    printf("\n");
}

float *get_array(int size_of_array)
{
    float *array;
    array = (float*)malloc(size_of_array * sizeof(float));
    printf("Input array numbers:\n");
    for (int i=0; i<size_of_array; i++)
        scanf("%f", &array[i]);
    return array;
}

void max_array(float *array1, float *array2, int size_of_array)
{
    for (int i=0; i<size_of_array; i++)
    {
        array1[i] = (array1[i] > array2[i]) ? array1[i]/2 : array2[i]/2;
    }
}

int main()
{
    int size_of_array;
    printf("Input count of numbers in array: ");
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