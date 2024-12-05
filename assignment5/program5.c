//program for computing simple interest and compound interest
#include<stdio.h>
#include<math.h>

float principal, rate, time, simple_i, compound_i, a;
int n;

int main()
{
    printf("Enter Principal amount:");
    scanf("%f", &principal);
    printf("Enter Rate of interest in decimal form:");
    scanf("%f", &rate);
    printf("Enter Time in years:");
    scanf("%f", &time);
    printf("How many times in year will the interest be compounded?");
    scanf("%d", &n);

    simple_i = principal*rate*time;
    a = principal*pow((1+rate/n), n*time);
    compound_i = a-principal;

    printf("Simple interest is: %.2f\n", simple_i);
    printf("Compound interest is: %.2f\n", compound_i);
}

