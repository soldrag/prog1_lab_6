int **get_array(int x_size, int y_size)
{
    int **array;
    array = (int**)malloc(y_size * sizeof(int));
    for (int i = 0; i < y_size; i++) {
        array[i] = (int*)malloc(x_size * sizeof(int));
    }
    for (int i=0; i<y_size; i++) {
        printf("Input array numbers for %d string:\n", i);
        for (int j=0; j<x_size; j++)
            scanf("%d", &array[i][j]);
    }

    return array;
}

void print_array(int *array, int size_of_array)
{
    for (int i=0; i<size_of_array; i++)
        printf("%d\t", array[i]);
    printf("\n");
}

int *multiple_columns(int **array, int x_size, int y_size)
{
    int *multiple_array;
    multiple_array = (int*)malloc(x_size * sizeof(int));
    for (int i=0; i<x_size; i++)
    {
        multiple_array[i] = array[0][i];
        for (int j=1; j<y_size; j++)
            multiple_array[i] *= array[j][i];
    }
    return multiple_array;
}