//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main(void) {
    int n;

    FILE *fp = fopen("numbers.txt", "w");
    if (fp == NULL) {
        perror("Error creating numbers.txt");
        return 1;
    }

    printf("How many integers do you want to enter? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid count.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            printf("Invalid input.\n");
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%d ", value);
    }
    fprintf(fp, "\n");
    fclose(fp);

    printf("File 'numbers.txt' created successfully.\n\n");


    
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    long long sum = 0;
    int num;
    int count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No integers found in file.\n");
        return 1;
    }

    double average = (double)sum / count;

    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}