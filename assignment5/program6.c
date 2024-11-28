//C code to calculate net salary
#include <stdio.h>

int main()
{
    float basicSalary = 15000.0;
    float HRA_percentage = 0.20; 
    float DA_percentage = 0.30;

    float HRA = basicSalary * HRA_percentage;
    float DA = basicSalary * DA_percentage;

    float netSalary = basicSalary + HRA + DA;

    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA (20%%): %.2f\n", HRA);
    printf("DA (30%%): %.2f\n", DA);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
