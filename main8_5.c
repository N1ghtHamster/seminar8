void change_max_min(int size, int a[])
{
    int flag_min, flag_max, tmp_min, tmp_max;
    tmp_max = a[0];
    tmp_min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (tmp_min > a[i])
        {
            flag_min = i;
            tmp_min = a[i];
        }
        if (tmp_max < a[i])
        {
            flag_max = i;
            tmp_max = a[i];
        }
    }
    tmp_min = a[flag_min];
    a[flag_min] = a[flag_max];
    a[flag_max] = tmp_min;
}