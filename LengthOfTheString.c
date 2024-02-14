// ways to calculate the length of the string

#include<stdio.h>

int main(){

    char str[] = "Subham";
    int i;

    // way 1
    int count;
    for(int i = 0; str[i] != '\0'; i++) count++;
    printf("The length of the string is: %d\n", count);

    // way 2
    for(i = 0; str[i]; i++);
    printf("The length of the string is: %d", i);
    printf("\n");


    return 0;
}