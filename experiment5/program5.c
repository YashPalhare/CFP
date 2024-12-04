//program for computing simple interest and compound interest
#include<stdio.h>
#include<math.h>

int principal, rate, time, simple_i, compound_i, a;

int main()
{
    printf("Enter Principal amount:");
    scanf("%d", &principal);
    printf("Enter Rate of interest:");
    scanf("%d", &rate);
    printf("Enter Time in years:");
    scanf("%d", &time);

    simple_i = principal*rate*time;
    a = principal*pow((1+rate/1), time);
    compound_i = a-principal;

    printf("Simple interest is: %d\n", simple_i);
    printf("Compound interest is: %d\n", compound_i);
}

