// making the last digit of the given number as 0

#include<stdio.h>

int main(){
    int a = 2345, lastDigit;

    // logic
    lastDigit = a % 10;
    a -= lastDigit;

    printf("The new value of a is %d", a);
    return 0;
}