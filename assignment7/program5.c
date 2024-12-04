//program to calculate sum of all numbers from 1 to 100 which are divisible by 4.
#include<stdio.h>

int main()
{
    int i, s = 0;
    for (i=1; i <= 100; i++)
    {
        if(i%4 == 0)
        {
            s += i;
        }
    }
    printf("sum is: %d\n", s);
}