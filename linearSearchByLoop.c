#include<stdio.h>

int linearSearch(int arr[], int n, int k){
    for(int i = 0; i < n; i++){
        if(arr[i] == k) return i;
    }
    return -1;
}

int main(){

    int arr[] = {1,2,3,4,55,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; scanf("%d", &k);
    int index = linearSearch(arr, n, k);
    printf("The element is found in index %d", index);

    return 0;
}