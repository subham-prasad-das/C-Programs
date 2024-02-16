// to rotate a given number towards right

#include<stdio.h>

int main(){

    int num;
    printf("Enter a number you want to rotate towards right : ");
    scanf("%d", &num);

    // logic
    int count = 0; // taken to count the number of digits in the number that was inputted by the user
    int numD = num; // duplicated the number that was inputted by the user for not loosing the original number
    while(numD > 10) { // loop to count the number
        numD /= 10;
        count++;
    }

    int lastDigit = num % 10; // stored the last digit of the number inputted

    while(count > 0){ // added 0s to the last digit of the number inputted
        lastDigit *= 10;
        count--;
    }
    int rotatedNum = lastDigit + (num/10);

    printf("The inputted number i.e. %d when is rotated towards right by one digit became %d", num, rotatedNum);

    return 0;
}