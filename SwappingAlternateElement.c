#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while(i < (n - 1)){
        int j = i + 1;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}