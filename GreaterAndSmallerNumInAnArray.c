// finding the greatest and smallest values of the elements present in an array 

#include<stdio.h>

int main(){

    int arr[10] = {2, 1, 322, 27, 234, 23, 253, 657, 7567, 8543};

    // logic
    int smallest = arr[0], largest = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] < smallest) smallest = arr[i];
        if(arr[i] > largest) largest = arr[i];
    }
    printf("The smallest no in the array is %d and the largest number is %d", smallest, largest);

    return 0;
}