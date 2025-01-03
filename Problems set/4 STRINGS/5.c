#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The frequency of '%c' is: %d\n", ch, count);

    return 0;
}
