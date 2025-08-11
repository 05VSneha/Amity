#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    char dept[50];
};
int main() {
    struct Student s;
    char event[50];

    printf("=============================================\n");
    printf("   Amity University - Event Registration    \n");
    printf("=============================================\n");
 printf("Enter your full name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter your roll number: ");
    scanf("%d", &s.roll);
    getchar(); // Clear newline

