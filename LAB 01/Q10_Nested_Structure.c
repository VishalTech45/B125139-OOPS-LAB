#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNumber;
    char name[50];
    struct Date dob;   // nested structure
};

int main() {
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNumber);

    printf("Enter Name: ");
    scanf("%s", s1.name);   // for single word names   

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d-%02d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}