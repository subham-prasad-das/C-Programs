#include<stdio.h>

int main(){

    int num, a[4], i = 0; 
    scanf("%d", &num);
    
    if(num == 0) printf("%d",0);
    else if(num == 1) printf("%d",1);
    else{
        while(num){
            a[i] = num % 2;
            num /= 2;
            i++;
        }
        for(int j = i - 1; j >= 0; j--){
            printf("%d", a[j]);
        }
    }
    return 0;
}