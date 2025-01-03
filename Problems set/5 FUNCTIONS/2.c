#include <stdio.h>

double power(double base, int exp) {
    double result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exp;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exp, power(base, exp));

    return 0;
}
