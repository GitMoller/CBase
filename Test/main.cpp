#include <iostream>

int main() {
    int i = 1;
    int j = 0;
//    j = (++i)+(++i);
    j = (i++)+(i++);
    printf("%d",j);
    return 0;
}
