#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter the coefficients of the quadratic equation : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a valid quadratic equation.\n");
    } else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginary_Part = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginary_Part);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginary_Part);
    }

    return 0;
}
