#include <stdio.h>

int add (int c, int d) {
    c = c + d;
    d = c - d;
    c = c - d;

    printf
}

int main () {
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    add(a,b);
}