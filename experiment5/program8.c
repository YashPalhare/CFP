//meter to kilometer converter
#include<stdio.h>

int main()
{
    int dist;
    printf("Enter distance in meters\n");
    scanf("%d\n", &dist);
    printf("the distance in kilometers is: %d\n", dist/1000);
}