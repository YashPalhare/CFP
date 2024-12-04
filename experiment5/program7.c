#include<stdio.h>

int main()
{
    int ten, five, two, one;

    printf("Enter the number of Rs. 10 coins.\n");
    scanf("%d", &ten);
    printf("Enter the number of Rs. 5 coins.\n");
    scanf("%d", &five);
    printf("Enter the number of Rs. 2 coins.\n");
    scanf("%d", &two);
    printf("Enter the number of Rs. 1 coins.\n");
    scanf("%d", &one);

    printf("total money is: %d\n", ten*10+five*5+two*2+one);
}