#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n, int i){
    if(n <= 2){
        if(n == 2) return true;
        else return false;
    }
    if(n % i == 0) return false;
    if(i * i > n) return true;
    isPrime(n, i + 1);
}

int main(){

    int num; scanf("%d", &num);
    if(isPrime(num, 2)) printf("Prime");
    else printf("Not prime");

    return 0;
}