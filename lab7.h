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

float sum_array(float *array1, float *array2, int sum_limit)
{
    float sum = 0;
    for (int i=0; i<sum_limit; i++)
    {
        sum += abs(array1[i] * array2[i]);
    }
    return sum;
}

float *math_array(float *array1, float *array2, int size_of_array)
{
    float *array = (float*)malloc(size_of_array * sizeof(float));
    for (int i=0; i<size_of_array; i++)
    {
        array[i] = (array1[i] * array2[i]) - sum_array(array1, array2, size_of_array);
    }
    return array;
}