/*Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST, UNKNOWN };

enum Role getRole(const char *s) {
    if (strcmp(s, "ADMIN") == 0) return ADMIN;
    if (strcmp(s, "USER") == 0)  return USER;
    if (strcmp(s, "GUEST") == 0) return GUEST;
    return UNKNOWN;
}

int main() {
    char input[20];
    printf("Enter your role (ADMIN, USER, GUEST): ");
    scanf("%s", input);

    enum Role role = getRole(input);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role\n");
    }

    return 0;
}