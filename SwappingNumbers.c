// swap numbers

#include<stdio.h>

int main(){
    int a = 231, b = 10;

    printf("The value of a before swapping is %d\n", a);
    printf("The value of b before swapping is %d\n", b);

        // logic to swap the given numbers
        int temp;
        temp = a; a = b; b = temp;

    printf("The value of a after swapping is %d\n", a);
    printf("The value of b after swapping is %d\n", b);
    return 0;
}