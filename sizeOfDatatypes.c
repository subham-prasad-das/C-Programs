// print the sizes of the datatypes

#include<stdio.h>

int main(){
    int a = 10; float b = 10.0; double c = 10.0; char d = 'a';
    printf("The size of a is %d", sizeof(a));
    printf("The size of b is %d", sizeof(b));
    printf("The size of c is %d", sizeof(c));
    printf("The size of d is %d", sizeof(d));
    return 0;
}