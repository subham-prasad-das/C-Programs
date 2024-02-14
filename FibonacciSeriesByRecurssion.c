#include<stdio.h>

void printFibo(int a, int b, int i, int range){
    if(i == range) return;
    else{
        int temp = a + b;
        printf("%d ", temp);
        printFibo(b, temp, i + 1, range);
    }
}

int main(){

    int range; scanf("%d", &range);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    printFibo(a, b, 1, range);

    return 0;
}