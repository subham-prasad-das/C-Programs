#include<stdio.h>

void findFactors(int i, int n){
    if(i == n) return ;
    else{
        if(n % i == 0){
            printf("%d ", i);
            findFactors(i + 1, n);
        }
        else{
            findFactors(i + 1, n);
        }
    }
}

int main(){

    int num; scanf("%d", &num);
    printf("The factors of %d are: ", num);
    findFactors(1, num);
    return 0;
}