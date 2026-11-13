/*Store details of 5 students in an array of structures and print all.*/
#include <stdio.h>

#define N 5

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[N];

    for (int i = 0; i < N; i++) {
        printf("Enter Name of student %d:\n", i + 1);
        scanf("%49s", s[i].name);
        printf("Enter Roll Number of student %d:\n", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks of student %d:\n", i + 1);
        scanf("%d", &s[i].marks);
    }

    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < N; i++) {
        printf("%-15s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}