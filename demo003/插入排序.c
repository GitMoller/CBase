// #include <stdio.h>

// int main()
// {
//     int a[5] = {6, 4, 7, 3, 5};

//     for (int i = 1; i < 5; i++)
//     {
//         int key = a[i];
//         int j = i - 1;
//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = key;
//         // int j;
//         // for (j = i - 1; j >= 0; j--)
//         // {
//         //     if (a[j] > key)
//         //     {
//         //         a[j + 1] = a[j];
//         //     }
//         //     else
//         //     {
//         //         break;
//         //     }
//         // }
//         // a[j + 1] = key;

//         for (int i = 0; i < 5; i++)
//         {
//             printf("%d", a[i]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{
    int arr[10] = {3, 2, 5, 1, 6, 8, 4, 9, 0, 7};

    for (int i = 1; i < 10; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for (int i = 0; i < 10; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}