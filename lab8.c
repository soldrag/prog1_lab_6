#include <stdio.h>
#include <malloc.h>
#include "lab8.h"

#define MAX_COLS 5
#define MAX_ROWS 4

int main()
{
    int cols, rows;
    float **array;    
    float *sum_array;

    while (1)
    {
        printf("Input number of rows and number of collumns, use space for separate vars: ");
        scanf("%d%d", &rows, &cols);
        if (cols <=MAX_COLS && rows <= MAX_ROWS) break;
        printf("Maximum array size %dx%d, try again.\n", MAX_ROWS, MAX_COLS);
    }
    
    array = (float**)malloc(rows * sizeof(float));
    for (int i=0; i<rows; i++)
    {
        array[i] = (float*)malloc(cols * sizeof(float));
    }
    input(array, rows, cols);
    printf("Result array\n");
    for (int i=0; i<rows; i++)
        print_array(array[i], cols);
    printf("Sum of elements for collumns\n");
    sum_array = sum_rows(array, rows, cols);
    print_array(sum_array, cols);
    int max = get_max(sum_array, cols);
    int min = get_min(sum_array, cols);
    change_collumns(array, min, max, rows);
    printf("Array after change\n");
    for (int i=0; i<rows; i++)
        print_array(array[i], cols);
}