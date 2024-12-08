#include<stdio.h>

int main() {
    int a = 4;
    printf("value of a: %d\n", a);
    printf("add of a: %d\n", &a);

    int b = 5;
    printf("value of b: %d\n", b);
    printf("add of b: %d\n", &b);

    int *d = &b;

    *d = 8;

    printf("value of b: %d\n", b);



    return 0;
}