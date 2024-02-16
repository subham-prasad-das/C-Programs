#include<stdio.h>

int findGCD(int a, int b){
    if(b == 0) return a;
    return findGCD(b, a % b);
}

int main(){

    int a, b, gcd; scanf("%d %d", &a, &b);
    if(a > b){
        gcd = findGCD(a, b);
    }
    else{
        int temp = a;
        a = b;
        b = temp;
        gcd = findGCD(a, b);
    }
    printf("%d", gcd);
    return 0;

}