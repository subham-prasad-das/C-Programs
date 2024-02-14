// trying to store ascii and characters and printing them in both way

#include<stdio.h>

int main(){

    char str[6] = {'A', 66, 67, 'D', 70, 'G'};
    printf("%s \n", str);
    for (int i = 0; i < 6; i++) printf("%d ", str[i]);
    printf("\n");
    for (int i = 0; i < 6; i++) printf("%c ", str[i]);
    
    return 0;
}