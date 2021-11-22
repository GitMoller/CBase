#include <stdio.h>

int main(){
    int a[5]={1,3,2,4,5};

    int max = a[0];

    // for(int i=0;i<5;i++)
    // {
    //     if (max < a[i])
    //     {
    //         max = a[i];
    //     }
    // }
    int i = 0;
    while (i<5)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        i++;
    }
    printf("%d",max);
    return 0;
}