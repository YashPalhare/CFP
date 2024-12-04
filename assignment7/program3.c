#include<stdio.h>

int main()
{
    int i, s = 0;
    for (i=1; i <= 10; i++)
    {
        s += i;
        //printf("%d\n", s);
    }

    printf("the sum of numbers from 1 to 10 is %d\n", s);
}