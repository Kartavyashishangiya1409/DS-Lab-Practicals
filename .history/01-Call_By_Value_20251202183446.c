#include <stdio.h>

int add (int c, int d) {
    c = c + d;
    c = c +-d;
    c = c + d;
}

int main () {
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    add(a,b);
}