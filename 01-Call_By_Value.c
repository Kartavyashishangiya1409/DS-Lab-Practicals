#include <stdio.h>

int Interchange (int c, int d) {
    c = c + d;
    d = c - d;
    c = c - d;

    printf("a : %d, \nb : %d", c, d);
}

int main () {
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    printf("\n");

    Interchange(a,b);
}