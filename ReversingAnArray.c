#include<stdio.h>

void reverse(int arr[], int n){
    int s = 0, e = n - 1;
    for(; s < e; ){
        int temp;
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; e--;
    }
}

int main(){

    int arr[] = {1,2,3,4,4,6,7,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}