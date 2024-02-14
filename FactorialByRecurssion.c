#include<stdio.h>

int getFactorial(int num){
    if(num == 0) return 1;
    if(num == 1) return 1;
    return (num * getFactorial(num - 1));
}

int main(){

    int num; scanf("%d", &num);
    int fact = getFactorial(num);
    printf("The factorial is: %d", fact);

    return 0;
}