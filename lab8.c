#include <stdio.h>
#include <malloc.h>
#include "lab8.h"

int main()
{
    int **array;
    int *multiple_array;
    unsigned int x, y;
    while (1) {
        printf("Input array size, use spaces for separate vars, columns:\"x\", strings:\"y\": ");
        scanf("%d%d", &x, &y);
        if (x <= 5 && y <= 10) break;
        printf("Array must be maximum 5x10, input again\n");
    }

    array = get_array(x, y);
    for (int i=0; i<y; i++)
        print_array(array[i], x);
    multiple_array = multiple_columns(array, x, y);
    printf("Multiple array is:\n");
    print_array(multiple_array, x);

}