#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// ???????
// void BubbleSort(int arr[],int a){
//     if (arr==NULL || a <= 0)
//     {
//         return;
//     }
//     int temp;
//     for(int i=0;i<a;i++){
//         for(int j=i+1;j<a;j++)
//     }

// }


int main()
{
    int x, y, z;
    scanf("%d,%d",&x,&y);
    z = add(x, y);
    printf("%d", z);
    return 0;
}
