#include<stdio.h>

int main()
{
    enum Months{January, February, March, April, May, June, July, August, September, October, November, December};
    enum Months m = December;

    printf("December is %dth month.", m+1);
}