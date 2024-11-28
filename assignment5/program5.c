//C code to compute Simple interest and Compound Interest
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    float simpleInterest = (principal * rate * time) / 100;
    
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);
    
    return 0;
}
