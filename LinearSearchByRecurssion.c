#include<stdio.h>

int linearSearch(int arr[], int n, int i, int k){
    if(i == n) return -1;
    else if(arr[i] == k) return i;
    else linearSearch(arr, n, i + 1, k);
}

int main(){

    int arr[] = {1,2,3,4,5,687,7,8,91,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; scanf("%d", &k);
    int index = linearSearch(arr, n, 0, k);
    printf("The element is found in index %d", index);

    return 0;
}