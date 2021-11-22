#include <stdio.h>

int main()
{
    int a[5] = {6, 4, 7, 3, 5};

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
    }
}

