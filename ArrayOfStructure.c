// passing arguments to the array of structure in a different way
// Array of structures 

#include<stdio.h>

struct Arr{
    int arr1;
    char arr2;
};

int main(){

    struct Arr a1[3] = {
        {1, 'a'},
        {2, 'b'},
        {3, 'c'},
    };

    for(int i = 0; i < 3; i++){
        printf("%d is equivalent to %c\n", a1[i].arr1, a1[i].arr2);
    }

    return 0;
}