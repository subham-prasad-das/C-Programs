// Perfect number
// For example, the number 28 is a perfect number because its divisors (excluding itself) are 1, 2, 4, 7, and 14, and 1 + 2 + 4 + 7 + 14 = 28.
// 28, 496, 8128

#include<stdio.h>
#include<stdbool.h>

bool isPerfect(int num){
    int sum = 0;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0) sum += i;
    }

    if(sum == num) return true;
    else return false;
}

int main(){

    int num; scanf("%d", &num);

    // step 1 - checking if it is perfect through function
    if(isPerfect(num)) printf("The number entered is a perfect number");
    else printf("The number entered is not a perfect number");

    return 0;

}