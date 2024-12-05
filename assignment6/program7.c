//roots of quadratic equations
#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two real and distinct roots: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        float root = -b / (2 * a);
        printf("The equation has one real root: %.2f\n", root);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The equation has two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Invalid input! 'a' cannot be zero for a quadratic equation.\n");
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
