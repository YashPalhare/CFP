//Program to get the size of some variables

#include<stdio.h>

int main ()
{
    int i = 5;
    float f = 5.5;
    char c = 'Y';

    printf("The size of integer i is: %lu bytes\n", sizeof(i));
    printf("The size of float f is: %lu bytes\n", sizeof(f));
    printf("The size of integer c is: %lu bytes\n", sizeof(c));
}