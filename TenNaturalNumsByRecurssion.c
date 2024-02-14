// recurssive way to print 10 natural numbers in natural way

#include<stdio.h>

void fun(int num){
    if(num == 0) return ;
    else{
        printf("%d ", num); 
        fun(num - 1);
    }
}

int main(){

    int range;
    printf("Enter the upper range: "); scanf("%d", &range);

    //logic
    fun(range);

    return 0;
}