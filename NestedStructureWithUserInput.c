// Another example of nested structures with all parameters entered through user input 

#include<stdio.h>
#include<string.h>

struct Date{
    int dd, mm, yyyy;
};


struct Employee{
    int id;
    char name[10];
    struct Date doj;
};

int main(){

    struct Employee e1;
    printf("Enter the id of the first employee: "); scanf("%d", &e1.id);
    printf("Enter the name of the first employee: "); scanf("%s", &e1.name);
    printf("Enter the Date of Joining of the first employee: "); scanf("%d %d %d", &e1.doj.dd, &e1.doj.mm, &e1.doj.yyyy);

    printf("The id of the employee is %d, his name is %s and he has joined the company on %d-%d-%d", e1.id, e1.name, e1.doj.dd, e1.doj.mm, e1.doj.yyyy);

    return 0;
}