#include <stdio.h>

int nterchange (int *c, int *d) {
       *c = *c + *d;
       *d = *c - *d;
       *c = *c - *d;
}

int main () {
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    printf("\n");

    nterchange(&a, &b);

    printf("a : %d, \nb : %d", a, b);
}