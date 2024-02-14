#include<stdio.h>

int main(){

    int num; scanf("%d", &num);
    for(int i = 2; i < num; i++){
        if(num % 2){
            printf("Its prime");
            return 0;
        }
    }
    printf("Its not prime");

    return 0;
}