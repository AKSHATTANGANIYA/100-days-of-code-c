/*Find and print the student with the highest marks.*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students:\n");
    scanf("%d", &n);

    struct Student s[n];
    int top = 0;
    printf("Enter Name, Roll Number and Marks of each student:\n");

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);

    return 0;
}