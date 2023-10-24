#include <stdio.h>

int is_two_same(int size, int a[])
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (a[i] == a[j + 1])
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int a[21] = {10, 11, 12, 14, 4, 0, 1, 85, 17, 112, 75, 111, 16, 15, 14, 2, 9, 8, 7, 6, 11};
    printf("%d", is_two_same(21, a));
    return 0;
}