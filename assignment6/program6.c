//program for detecting type of triangle
#include<stdio.h>

int main()
{
    float s1, s2, s3;
    printf("Enter the length of sides of triangle:\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    if(s1 == s2 == s3)
    {
        printf("The triangle is an equilateral triangle.\n");
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("The triangle is an isosceles triangle.\n");
    }
    else if(s1*s1 == s2*s2 + s3*s3 || s2*s2 == s1*s1 + s3*s3 || s3*s3 == s1*s1 + s2*s2)
    {
        printf("The triangle is right angled triangle.");
    }
}