#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not  negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
