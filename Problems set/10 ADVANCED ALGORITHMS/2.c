#include <stdio.h>
#include <math.h>

double geometricSum(double a, double r, int n) {
    if (r == 1) {
        return a * n;
    } else {
        return a * (1 - pow(r, n)) / (1 - r);
    }
}

int main() {
    double a, r;
    int n;

    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double sum = geometricSum(a, r, n);
    printf("The sum of the geometric series is: %.2lf\n", sum);

    return 0;
}
