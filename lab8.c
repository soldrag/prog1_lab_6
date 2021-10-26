#include <stdio.h>
#include <malloc.h>

int **get_array(int x_size, int y_size)
{
    int **array;
    array = (int**)malloc(y_size * sizeof(float));
    for (int i = 0; i < y_size; i++) {
        array[i] = (int*)malloc(x_size * sizeof(int));
    }
    for (int i=0; i<y_size; i++) {
        printf("Input array numbers for %d string:\n", i);
        for (int j=0; j<x_size; j++)
            scanf("%d", &array[j][i]);
    }

    return array;
}

void print_array(int **array, int x_size, int y_size)
{
    for (int i=0; i<y_size; i++)
    {
        for (int j=0; j<x_size; j++)
            printf("%d\t", array[j][i]);
        printf("\n");
    }

}

int *multiple_columns(int array, int x_size, int y_size)
{
    
}

int main()
{
    int **array;
    int x, y;
    printf("Input array size, use spaces for separate vars, \"x\", \"y\": ");
    scanf("%d%d", &x, &y);
    array = get_array(x, y);
    print_array(array, x, y);

}