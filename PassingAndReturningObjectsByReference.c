// passing as well as returning references of structure to the function 

#include<stdio.h>

struct Date{
    int dd, mm, yyyy;
};

struct Date* fun(struct Date* d){
    (*d).dd = 9; (*d).mm = 3; (*d).yyyy = 2025;
    return d;
}

int main(){

    struct Date d1 = {8, 2, 2024};
    printf("Previous date was %d-%d-%d", d1.dd, d1.mm, d1.yyyy);
    struct Date* d2 = fun(&d1);
    printf("New date is %d-%d-%d", (*d2).dd, (*d2).mm, (*d2).yyyy);

    return 0;
}