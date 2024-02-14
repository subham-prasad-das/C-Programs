#include<stdio.h>

int isPrime(int num){
    if(num == 2) return 1;
    else{
        for(int i = 2; i < num/2; i++){
            if(num % i == 0) return 0;
        }
    }
    return 1;
}

int main(){

    int range; scanf("%d", &range);
    for(int i = 2; i <= range; ){
        if(isPrime(i)){
            printf("%d", i);
            i++;
        }
        else i++;
    }
    return 0;
}