#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[50];
    char ch;
    int wordCount = 0, inWord = 0;

    printf("Enter the filename to count words: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }
    fclose(file);

    printf("The file contains %d words.\n", wordCount);

    return 0;
}
