#include <stdio.h>

int main()
{
    int number = 5; //����number��ֵ��5
    // int t = *(&number);
    // printf("%d\n", t);

    int *ptr1 = &number; //����ptr1ָ�룬ָ��number
    int **ptr2 = &ptr1;  //����ptr2ָ�룬ָ��ptr1
    int ***ptr3 = &ptr2; //����ptr3ָ�룬ָ��ptr2
    // printf("%p",ptr1);
    printf("number��ֵ:%d\n", number);
    printf("number�ĵ�ַ��%p\n", &number);
    printf("\n");

    printf("ptr1��ֵ:%p\n", ptr1);
    printf("ptr1�ĵ�ַ��%p\n", &ptr1);
    printf("ptr1ָ��ĵ�ֵ��*ptr1��:%d\n", *ptr1);

    printf("\n");

    printf("ptr2��ֵ:%p\n", ptr2);
    printf("ptr2�ĵ�ַ��%p\n", &ptr2);
    printf("ptr2ָ��ĵ�ֵ��*ptr2��:%p\n", *ptr2);
    printf("\n");

    printf("ptr3��ֵ:%p\n", ptr3);
    printf("ptr3�ĵ�ַ��%p\n", &ptr3);
    printf("ptr3ָ��ĵ�ֵ��*ptr3��:%p\n", *ptr3);
    printf("\n");
}