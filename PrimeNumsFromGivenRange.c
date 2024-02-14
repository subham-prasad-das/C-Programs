// print prime numbers from given ranges using loops

#include<stdio.h>
#include<stdbool.h>

bool isprime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){

    int lowerNum, upperNum;
    printf("Enter the lower range: "); scanf("%d", &lowerNum);
    printf("Enter the upper range: "); scanf("%d", &upperNum);

    //logic
    for(int i = lowerNum; i <= upperNum; i++){
        if(isprime(i)) printf("%d ", i);
    }

    return 0;
}