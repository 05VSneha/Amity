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
    printf("Enter your department: ");
    fgets(s.dept, sizeof(s.dept), stdin);

    printf("Enter the event you want to register for: ");
    fgets(event, sizeof(event), stdin);

    printf("\n----------- Registration Slip --------------\n");
    printf("University : Amity University\n");
    printf("Name       : %s", s.name);
    printf("Roll No.   : %d\n", s.roll);
    printf("Department : %s", s.dept);
    printf("Event      : %s", event);
    printf("---------------------------------------------\n");
    printf("✅ Registration Successful! See you at the event.\n");

    return 0;
}
