#include <stdio.h>

int main()
{
    int number = 5; //声明number的值，5
    // int t = *(&number);
    // printf("%d\n", t);

    int *ptr1 = &number; //声明ptr1指针，指向number
    int **ptr2 = &ptr1;  //声明ptr2指针，指向ptr1
    int ***ptr3 = &ptr2; //声明ptr3指针，指向ptr2
    // printf("%p",ptr1);
    printf("number的值:%d\n", number);
    printf("number的地址：%p\n", &number);
    printf("\n");

    printf("ptr1的值:%p\n", ptr1);
    printf("ptr1的地址：%p\n", &ptr1);
    printf("ptr1指针的的值（*ptr1）:%d\n", *ptr1);

    printf("\n");

    printf("ptr2的值:%p\n", ptr2);
    printf("ptr2的地址：%p\n", &ptr2);
    printf("ptr2指针的的值（*ptr2）:%p\n", *ptr2);
    printf("\n");

    printf("ptr3的值:%p\n", ptr3);
    printf("ptr3的地址：%p\n", &ptr3);
    printf("ptr3指针的的值（*ptr3）:%p\n", *ptr3);
    printf("\n");
}