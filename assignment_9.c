#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Cannot open destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
