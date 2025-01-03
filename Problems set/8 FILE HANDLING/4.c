#include <stdio.h>

int main() {
    char filename[50];
    char text[100];

    printf("Enter the filename to append: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

    fputs(text, file);
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}
