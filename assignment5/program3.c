//A simple calculator
#include<stdio.h>

float num1, num2;
int choice;

int check() {
    if (choice == 1) {
        printf("The result is: %.2f\n", num1+num2);
    }
    else if (choice == 2) {
        printf("The result is: %.2f\n", num1-num2);
    }
    else if (choice == 3) {
        printf("The result is: %.2f\n", num1*num2);
    }
    else if (choice == 4) {
        printf("The result is: %.2f\n", num1/num2);
    }
    else {
        printf("please enter a valid choice.\n");
        check();
    }
}

int main()
{
    printf("which operation do you want to perform?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &choice);
    printf("Enter first number.\n");
    scanf("%f", &num1);
    printf("Enter second number.\n");
    scanf("%f", &num2);
    check();
}