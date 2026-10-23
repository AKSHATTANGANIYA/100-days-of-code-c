/*Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 100

int main() {
    char name[NAME_LEN];
    int age;

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Invalid input.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age.\n");
        return 1;
    }

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open info.txt for writing.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    if (fclose(fp) != 0) {
        printf("Error: failed to save the data.\n");
        return 1;
    }

    printf("Data was successfully saved to info.txt\n");
    return 0;
}