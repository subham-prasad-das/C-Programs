// reverse a string through a complicated way😉

#include<stdio.h>
#include<string.h>

void reverse(char str[], int len){
    int start = 0, end = len - 1; 
    for(int i = start; start < end; i++){
        char tempS, tempE;
        tempS = str[start];
        tempE = str[end];
        str[end] = tempS;
        str[start] = tempE;
        start++;
        end--;
    }

    printf("The reversed string is: %s", str);
}

int main(){

    char str[10];
    printf("Enter a string: "); scanf("%s", str);

    // logic
    reverse(str, strlen(str));

    return 0;
}