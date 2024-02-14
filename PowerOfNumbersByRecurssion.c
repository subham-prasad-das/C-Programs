#include<stdio.h>

int calculatePower(int n, int p){
    if(p == 0) return 1;
    return n * calculatePower(n, p - 1);
}

int main(){

    int num, p; scanf("%d %d", &num, &p);
    int power = calculatePower(num, p);
    printf("%d", power);

    return 0;
}