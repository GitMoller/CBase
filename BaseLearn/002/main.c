#include <stdio.h>

int main() {
    int data[1000],i,n,t,j;
    printf("��������������ĸ�����");
    scanf("%d",&n);

    printf("���������������");
    for (i = 0; i < n; i++) {
        scanf("%d",&data[i]);
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (data[j]>data[j+1])
            {
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }

    for (i = 0; i < n;i++) {
        printf("%5d",data[i]);
    }



    return 0;
}
