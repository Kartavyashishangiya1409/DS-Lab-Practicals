#include <stdio.h>

int exchange (int c, int d) {
    c = c + d;
    d = c - d;
    c = c - d;

    printf("a : %d, b : %d", c, d);
}

int main () {
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    printf("\n");

    add(a,b);
}