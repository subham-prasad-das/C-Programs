// print the next prime number of the given number

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num){
    for(int i = 2; i < num/2; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){

    int num;
    printf("Enter a number: "); scanf("%d", &num);

    //logic
    for(int i = num + 1; ; i++){
        if(isPrime(i)){
            printf("The next prime number after %d is %d", num, i); break;
        }
    }

    return 0;
}