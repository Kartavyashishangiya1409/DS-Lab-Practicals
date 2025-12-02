#include <stdio.h>

int interchange (int *c, int *d) {
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

    interchange(&a, &b);

    printf("a : %d, ")
}