//comparing numbers
#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3)
    {
        printf("%d is greatest among the three.\n", n1);
    }
    else if(n2 > n1 && n2 > n3)
    {
        printf("%d is greatest among the three.\n", n2);
    }
    else if(n3 > n2 && n3 > n1)
    {
        printf("%d is greatest among the three.\n", n3);
    }
    else
    {
        printf("Please enter three different numbers.\n");
    }

    return 0;
}