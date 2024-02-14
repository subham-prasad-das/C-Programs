#include<stdio.h>

int main(){

    int range; scanf("%d", &range);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    for(int i = 0; i < range; i++){
        int temp = a + b;
        printf("%d ", temp);
        a = b; b = temp;
    }

    return 0;
}