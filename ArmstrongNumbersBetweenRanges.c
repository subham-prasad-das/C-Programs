#include<stdio.h>
#include<stdbool.h>

bool checkArmstrong(int num){
    int sum = 0;
    int temp = num;
    while(temp){
        int rem = temp % 10;
        sum += rem * rem* rem;
        temp /= 10;
    }

    if(sum == num) return true;
    else return false;
}

int main(){

    int s, e; scanf("%d %d", &s, &e);

    bool found = false;
    for(int i = s; i <= e; i++){
        if(checkArmstrong(i)){
            printf("%d ", i);
            found = true;
        }
    }

    if(found == false) printf("There exist no armstrong numbers between the ranges given");
    return 0;

}