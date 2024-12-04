//simple calculator using switch case
#include<stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator: ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 + num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 + num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            result = num1 + num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        default:
            printf("Please enter a valid operator");
            break;
    }
}