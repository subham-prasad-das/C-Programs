#include<stdio.h>

int main(){

    int n, p, power = 1; scanf("%d %d", &n, &p);
    for(int i = 1; i <= p; i++){
        power *= n;
    }
    printf("The %d power of %d is %d", p, n, power);
    return 0;
}