#include<stdio.h>

int main(){

    int num; scanf("%d", &num);

    // separating digits and summation of the digits...
    int sum = 0, temp = num;
    while(temp){
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    // checking if Armstrong number or not
    if(sum == num) printf("The number entered is an Armstrong Number");
    else printf("The number entered is not an Armstrong Number");

    return 0;

}