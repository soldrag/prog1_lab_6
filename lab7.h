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