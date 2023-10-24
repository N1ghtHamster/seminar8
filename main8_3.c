int find_max_array(int size, int a[])
{
    int max = 0;
    for (int i = 0; i < size; i++, size--)
    {
        if (a[i] < a[size])
        {
            if (max < a[size])
                max = a[size];
        }
        else
        {
            if (max < a[i])
                max = a[i];
        }
    }
    return max;
}