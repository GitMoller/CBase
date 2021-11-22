#include <stdio.h>

int main()
{
    int a[5] = {6, 4, 7, 5, 3};

    for (int i = 0; i < 5 - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            int temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
        printf("%d", a[4]);
    }
}