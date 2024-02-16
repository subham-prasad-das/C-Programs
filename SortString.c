#include<stdio.h>

int main(){

    char str[9] = "SubhamDas";

    // step-1 : push the ascii values to an array
    int arr[9];
    for(int i = 0; i < 9; i++){
        arr[i] = str[i];
    }

    // step-2 : sort the array
    for(int i = 1; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // step-3 : printing the array therough characters
    for(int i = 0; i < 9; i++){
        printf("%c ", arr[i]);
    }

    return 0;

}