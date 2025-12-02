//  Write a c program to store 5 values in appropriate data structure and compute addition for the same, modify the size to store 10 values and compute addition using array. 

#include <stdio.h>

int main () {
    int arr[10], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of first 5 numbers = %d", sum);

    for (int i = 5; i < 10; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
        sum
    }
    
    
}