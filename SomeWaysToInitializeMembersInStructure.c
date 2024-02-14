// ways to initialize members of a Structure in C

#include<stdio.h>
#include<string.h>

struct Employee{
    char name[10];
    int id;
};

struct Date{
    int dd, mm, yyyy;
};

int main(){

    struct Employee e1 = {"Rohit", 45}; // initializing while declaring
    // We could have also initialized the structure members by using dot operator
    struct Date d1;
    printf("Enter the joining date of Employee 1: "); scanf("%d%d%d", &d1.dd, &d1.mm, &d1.yyyy); // initializing through user input
    printf("The employee id is: %d and his name is: %s. He has joined the office on %d-%d-%d.", e1.id, e1.name, d1.dd, d1.mm, d1.yyyy);

    return 0;
}

// We could have also added values to the date of birth through the below way -> 

// struct Date d1 = {.dd = 8, .mm = 2, .yyyy = 2024};