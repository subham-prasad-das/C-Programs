#include<stdio.h>

int main(){

    int arr1[] = {33,4,554,6,4,5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr1[i] == arr1[j]){
                printf("%d is the duplicate element", arr1[i]);
                break;
            }
        }
    }

    return 0;
}