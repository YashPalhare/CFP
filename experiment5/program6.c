//code for calculating net salary
#include<stdio.h>

int main()
{
    float basic_salary = 15000.0, HRA, DA, net_salary;
    HRA = basic_salary*0.20;
    DA = basic_salary*0.30;
    net_salary = basic_salary + HRA + DA;
    printf(" Basic salary is %.2f\n HRA is %.2f\n DA is %.2f\n Net salary is %.2f\n", basic_salary, HRA, DA, net_salary);
}