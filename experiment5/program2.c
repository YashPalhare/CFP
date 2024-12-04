//Program to calculate area of a room
#include<stdio.h>

int main()
{
    float length, breadth;
    printf("Enter the length of room:");
    scanf("%f", &length);
    printf("Enter the breadth of room:");
    scanf("%f", &breadth);
    printf("Area of room is: %.2f\n", length*breadth);
}