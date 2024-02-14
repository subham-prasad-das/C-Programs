#include<stdio.h>

int main(){

    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    int temp = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        temp = temp ^ arr[i];
    }
    printf("%d is unique", temp);

    return 0;
}