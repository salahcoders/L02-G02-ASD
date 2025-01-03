#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    printf("File created and written successfully.\n");

    return 0;
}
