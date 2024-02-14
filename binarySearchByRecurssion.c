#include<stdio.h>

int binarySearch(int arr[], int n, int s, int e, int k){
    int m = (s + e) / 2;
    if(s <= e){
        if(arr[m] == k) return m;
        else if(arr[m] > k) binarySearch(arr, n, s, m - 1, k);
        else if(arr[m] < k) binarySearch(arr, n, m + 1, e, k);
    }
    else return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; scanf("%d", &k);
    int index = binarySearch(arr, n, 0, n - 1, k);
    printf("The element is found in index %d", index);
    return 0;
}