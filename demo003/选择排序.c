// #include <stdio.h>

// int main()
// {
//     int a[5] = {1, 3, 2, 4, 5};

//     for (int i = 0; i < 5 - 1; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 int temp = a[j];
//                 a[j] = a[i];
//                 a[i] = temp;
//             }
//         }
//         for (int i = 0; i < 5; i++)
//         {
//             printf("%d", a[i]);
//         }
//         printf("\n");
//     }

// int i = 0;
// while (i < 5 - 1)
// {
//     int j = i + 1;
//     while (j < 5)
//     {
//         if (a[i] < a[j])
//         {
//             int temp = a[j];
//             a[j] = a[i];
//             a[i] = temp;
//         }
//         i++;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     i++;
// }

// }

#include <stdio.h>
int main()
{
    int arr[] = {6, 5, 2, 3, 8, 9, 1, 0, 7, 4};
    for (int i = 0; i < 10 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[min] > arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[min];
                arr[min] = tmp;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}