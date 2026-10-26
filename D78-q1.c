/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 256

int main(void) {
    char srcName[NAME_LEN], destName[NAME_LEN];
    int c;
    long copied = 0;

    printf("Enter the source file name: ");
    if (scanf("%255s", srcName) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the destination file name: ");
    if (scanf("%255s", destName) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (strcmp(srcName, destName) == 0) {
        printf("Error: source and destination must be different files.\n");
        return 1;
    }
    FILE *src = fopen(srcName, "rb");
    if (src == NULL) {
        printf("Error: could not open source file %s.\n", srcName);
        return 1;
    }

    FILE *dest = fopen(destName, "wb");
    if (dest == NULL) {
        printf("Error: could not create destination file %s.\n", destName);
        fclose(src);
        return 1;
    }

    while ((c = fgetc(src)) != EOF) {
        if (fputc(c, dest) == EOF) {
            printf("Error: failed while writing to %s.\n", destName);
            fclose(src);
            fclose(dest);
            return 1;
        }
        copied++;
    }
    if (ferror(src)) {
        printf("Error: failed while reading from %s.\n", srcName);
        fclose(src);
        fclose(dest);
        return 1;
    }

    fclose(src);
    if (fclose(dest) != 0) {
        printf("Error: failed to save %s.\n", destName);
        return 1;
    }

    printf("File copied successfully (%ld bytes copied).\n", copied);
    return 0;
}