#include<stdio.h>

int main(){

    int year; scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("It is leap");
    else printf("It is not leap");

    return 0;
}