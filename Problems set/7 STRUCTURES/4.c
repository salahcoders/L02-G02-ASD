#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

float calculateArea(struct Rectangle rect) {
    return rect.length * rect.width;
}

void displayRectangle(struct Rectangle rect) {
    printf("Length: %.2f\n", rect.length);
    printf("Width: %.2f\n", rect.width);
    printf("Area: %.2f\n", calculateArea(rect));
}

int main() {
    struct Rectangle rect;

    printf("Enter length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &rect.width);

    printf("\nRectangle Details:\n");
    displayRectangle(rect);

    return 0;
}
