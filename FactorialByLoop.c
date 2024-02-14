#include<stdio.h>

int main(){

    int num, fact = 1; scanf("%d", &num);
    for(int i = num; i >= 1; i--){
        fact *= i;
    }
    printf("The factorial is: %d", fact);
    return 0;
}