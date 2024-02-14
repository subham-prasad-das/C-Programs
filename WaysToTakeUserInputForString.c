// ways to take user input

#include<stdio.h>

int main(){

    char str[30];

    // way 1
    // printf("Enter your name: "); scanf("%s", str);
    // printf("Your name is: %s\n", str);

    // // way 2
    // printf("Enter your name: "); gets(str);
    // printf("Your name is: %s\n", str);

    // way 3
    printf("Enter your name: "); fgets(str, 30, stdin);
    printf("Your name is: %s\n", str);

    return 0;
}

// The difference is "scanf" will assume the delimiters like space, tab or enter as the end of the input whereas "gets" is only designed to take the string inputs also it will just consider enter as the delimiter, spaces will be assumed as the extension of the string.
// Still there is a way to input multiple no of words through scanf i.e. by using multiple '%s' inside scanf. But still its not a good practise nor it is the more conviniet way than gets.
// There is also a negative point about "gets" i.e. when the user enters the string which is larger in size than the size of the string declared at the time of initialization, then "gets" keep the xtra inputs in the empty memory blocks. So in new form of GCC, 'gets' is depricated but it is still there in GCC but is not used as was used previously.
// Talking about "fgets", it only keeps the inputs as per the declared size and when xtra input comes to it, it discard them.