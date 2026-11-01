/*Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.*/
#include <stdio.h>

#define MAX_NAME 50

int main() {
    int n;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        perror("Error creating students.txt");
        return 1;
    }

    printf("How many students? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid count.\n");
        fclose(fp);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char name[MAX_NAME];
        int roll;
        float marks;

        printf("\nStudent %d\n", i + 1);
        printf("Name (no spaces): ");
        scanf("%49s", name);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nRecords saved to students.txt\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        perror("Error opening students.txt");
        return 1;
    }

    char name[MAX_NAME];
    int roll;
    float marks;

    printf("\n%-20s %-10s %-8s\n", "Name", "Roll No", "Marks");
    printf("-----------------------------------------\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("%-20s %-10d %-8.2f\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}