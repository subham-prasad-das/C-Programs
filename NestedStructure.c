// Nested Structures 

#include <stdio.h>
#include<string.h>

// Define a structure for representing a date
struct Date {
    int dd;
    int mm;
    int yyyy;
};

// Define a structure for representing a student, which includes a nested Date structure
struct Student {
    char name[50];
    int rollNumber;
    struct Date dob; // Nested Date structure
};

int main() {
    // Declare a variable of type Student
    struct Student student1;

    // Assign values to the members of student1
    strcpy(student1.name, "Alice");
    student1.rollNumber = 101;
    student1.dob.dd = 5;
    student1.dob.mm = 8;
    student1.dob.yyyy = 2000;

    // Access and print the student's information
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Date of Birth: %d-%d-%d\n", student1.dob.dd, student1.dob.mm, student1.dob.yyyy);

    return 0;
}


