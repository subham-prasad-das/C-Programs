// appending the given digit at the last of the given number

#include<stdio.h>

int main(){

    int num = 234, dig = 5;

    //logic
    num = (num *10) + dig;

    printf("The new number is %d", num);

    return 0;
}