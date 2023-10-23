void sort_array(int size, int a[])
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            tmp = a[j];
            if (tmp > a[j + 1])
            {
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}