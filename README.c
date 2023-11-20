#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *university = NULL, *campus = NULL, *department = NULL;
    size_t maxLength = 0;

    printf("Enter your University: ");
    getline(&university, &maxLength, stdin);
    university[strcspn(university, "\n")] = '\0';  // Remove the newline character

    printf("Enter your Campus: ");
    getline(&campus, &maxLength, stdin);
    campus[strcspn(campus, "\n")] = '\0';

    printf("Enter your Department: ");
    getline(&department, &maxLength, stdin);
    department[strcspn(department, "\n")] = '\0';

    free(university);
    free(campus);
    free(department);

    system("cls");

    maxLength = 0; // Reset maxLength

    if (strlen(campus) > maxLength) {
        maxLength = strlen(campus);
    }
    if (strlen(department) > maxLength) {
        maxLength = strlen(department) + 6;
    }

    printEquals(maxLength);
    printf("%*s\n", (int)(strlen(university) + maxLength) / 2, university);
    printf("%*s\n", (int)(strlen(campus) + maxLength) / 2, campus);
    printf("%*s\n", (int)(strlen(department) + maxLength) / 2, department);
    printEquals(maxLength);

    return 0;
}
