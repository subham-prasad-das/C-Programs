#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int GCD(int num1, int num2){
    if(num2 == 0) return num1;
    else if(num1 == 0) return num2;
    return GCD(num2, num1 % num2);
}

int main(){

    int num1, num2;
    printf("Enter two numbers:"); scanf("%d%d", &num1, &num2);

    //logic
    int lcm = 0;
    if(num1 == num2) lcm = num1;
    else if((num1 % num2 == 0) || (num2 % num1 == 0)) lcm = (num1 > num2) ? num1 : num2;
    else if((isPrime(num1)) && (isPrime(num2))) lcm = num1 * num2;
    else lcm = (num1 * num2) / GCD(num1, num2);

    printf("The LCM of the given numbers is: %d", lcm);

    return 0;
}