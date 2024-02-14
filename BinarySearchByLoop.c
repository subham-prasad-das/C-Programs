#include<stdio.h>

int binarySearch(int arr[], int n, int k){
    int s = 0, e = n - 1, m = (s + e) / 2;
    for(int i = 0; i < (n / 2); i++){
        if(arr[m] == k) return m;
        else if(k > arr[m]) s = m + 1;
        else if(k < arr[m]) e = m - 1;
        m = (s+e) / 2;
    }
    return -1; 
}

int main(){

    int arr[] = {1,2,33,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; scanf("%d", &k);
    int index = binarySearch(arr, n, k);
    printf("The element is found in index %d", index);

    return 0;
}