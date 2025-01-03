#include <stdio.h>

int main() {
    char sourceFile[50], targetFile[50];
    char ch;

    // Input: Source and target file names
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Enter the target file name: ");
    scanf("%s", targetFile);

    FILE *source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Source file does not exist.\n");
        return 1;
    }

    FILE *target = fopen(targetFile, "w");
    if (target == NULL) {
        fclose(source);
        printf("Error: Could not create target file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    fclose(source);
    fclose(target);

    printf("Contents copied successfully.\n");

    return 0;
}
