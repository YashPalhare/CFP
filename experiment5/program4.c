//swapping two numbers
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("enter first value\n");
    scanf("%d", &a);
    printf("enter second value\n");
    scanf("%d", &b);
    printf("a: %d\nb: %d\n", a, b);
    c = b;
    b = a;
    a = c;
    printf("Swapped values:\na: %d\nb: %d\n", a, b);
}