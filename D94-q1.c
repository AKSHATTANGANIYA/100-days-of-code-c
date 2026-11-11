/*Define a struct with enum Gender and print person's gender.*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER, UNKNOWN };

struct Person {
    enum Gender gender;
};

enum Gender getGender(const char *s) {
    if (strcmp(s, "MALE") == 0)   return MALE;
    if (strcmp(s, "FEMALE") == 0) return FEMALE;
    if (strcmp(s, "OTHER") == 0)  return OTHER;
    return UNKNOWN;
}

int main() {
    char value[20];
    struct Person p;
    printf("Enter gender(Gender=MALE/FEMALE/OTHER): ");

    scanf("Gender=%19s", value);
    p.gender = getGender(value);

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}