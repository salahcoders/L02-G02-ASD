#include <stdio.h>

int main() {
    float length, breadth, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    if (length <= 0 || breadth <= 0) {
        printf("Length and breadth must be positive values.\n");
    } else {
        area = length * breadth;

        printf("The area of the rectangle is: %.2f square units\n", area);
    }

    return 0;
}
