// applying TSRS method for modifying the values of the member of the structure 

#include<stdio.h>

struct Date{
    int dd, mm, yyyy;
};

struct Date fun(struct Date d){
    d.dd = 9; d.mm = 3; d.yyyy = 2025;
    return d;
}

int main(){

    struct Date d1 = {8, 2, 2024};
    printf("Previous date was %d-%d-%d", d1.dd, d1.mm, d1.yyyy);
    struct Date d2 = fun(d1);
    printf("New date was %d-%d-%d", d2.dd, d2.mm, d2.yyyy);

    return 0;
}

// for working with structures and functions, we just need to pass the object along with its data type.