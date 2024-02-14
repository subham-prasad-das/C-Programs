//  procedures of declaring/defining and printing string

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "Subham";
    // char str[] = {'S', 'u', 'b', 'h', 'a', 'm'}; we can also define a string.

    // method 1
    for (int i = 0; str[i] != '\0'; i++){ // as per the condition, till we get a null character, we would print the elements of the character array
        printf("%c", str[i]);
    } printf("\n");
    
    // method 2
    for (int i = 0; str[i]; i++){ // as per the condition, until we have the value of str as a valid character i.e a non-zero character i.e. a character that is not a '\0', we would print the elements of the character array.
        printf("%c", str[i]);
    } printf("\n");

    // method 3
    for(int i = 0; i < strlen(str); i++){ // can write strlen only if we have included <string.h>
        printf("%c", str[i]);
    } printf("\n");

    // method 4
    printf("%s\n", str);

    // method 5
    printf("%s\n", &str[0]); // similar to passing "str" to the printf function where 'str' is the address of the 1st character of the string

    return 0;
}