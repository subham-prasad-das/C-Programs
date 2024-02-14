#include<stdio.h>

int main(){

    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8};
    int arr3[9];
    int i = 0, j = 0, k = 0; // i for arr1, j for aarr2, k for arr3;
    while(k < 9){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++; k++;
        }
        else if(arr2[j] < arr1[i]){
            arr3[k] = arr2[j];
            k++; j++;
        }
    }
    for(int i = 0; i < 9; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}