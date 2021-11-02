void input(float **array, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        printf("Input row elements\n");
        for(int j=0; j<col; j++)
        {
            scanf("%f", &array[i][j]);
       }
    }
}

void print_array(float *array, int size_of_array)
{
    for (int i=0; i<size_of_array; i++)
        printf("%f\t", array[i]);
    printf("\n");
}

float *sum_rows(float **array, int row_size, int collumn_size)
{
    float *collumns = (float*)malloc(collumn_size * sizeof(float));
    for (int collumn=0; collumn<collumn_size; collumn++)
    {
        collumns[collumn] = 0;
        for (int row=0; row<row_size; row++)
        {
            collumns[collumn] += array[row][collumn];
        }
    }
    return collumns;
}

int get_max(float *array, int collumn_size)
{
    float max=array[0];
    int collumn=0;
    for (int i=1; i<collumn_size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            collumn = i;
        }
    }
    return collumn;

}

int get_min(float *array, int collumn_size)
{
    float min=array[0];
    int collumn=0;
    for (int i=1; i<collumn_size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            collumn = i;
        }
    }
    return collumn;

}

void change_collumns(float **array, int f_collumn, int s_collumn, int row_size)
{
    float tmp;
    for (int row=0; row<row_size; row++)
    {
        tmp = array[row][f_collumn];
        array[row][f_collumn] = array[row][s_collumn];
        array[row][s_collumn] = tmp;
    }
}