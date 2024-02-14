// calculating the number of characters of a string

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "Hello";
    char search;
    printf("Enter the character you want to search for: "); scanf("%c", &search);

    //logic
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(str[i] == search) count++;
    }
    printf("The number of %c in the given string is %d", search, count);

    return 0;
}