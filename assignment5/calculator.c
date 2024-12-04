#include<stdio.h>

int main()
{
    char op;
    float num1, num2;

    printf("Enter the operator\n");
    scanf("%c", &op);
    printf("Enter the first value\n");
    scanf("%f", &num1);
    printf("Enter the second value\n");
    scanf("%f", &num2);

    printf("result: %f\n", (op == '+')*(num1+num2) + (op == '-')*(num1-num2) + (op == '*')*(num1*num2) + (op == '/')*(num1/num2) );
}