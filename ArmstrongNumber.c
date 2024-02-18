#include<stdio.h>
#include<math.h>

int checkArmstrong(int n){
    int temp = n;
    // extract the number of digits in n
    int dig = 0;
    while(temp){
        dig++;
        temp /= 10;
    }

    // calculating the armstrong
    int sum = 0;
    int temp2 = n;
    for(int i = 0; i < dig; i++){
        int rem = temp2 % 10;
        sum += pow(rem, dig);
        temp2 /= 10;
    }

    if(sum == n) return 1;
    else return 0;
}

int main(){

    int n; scanf("%d", &n);
    if(checkArmstrong(n)) printf("Yes");
    else printf("No");
    return 0;

}