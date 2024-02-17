/*
void rotate(int arr[], int n, int k){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];
    }
    // print the array then
    for(int i = 0; i < 10; i++){
        printf("%d ", temp[i]);
    }
}
*/

#include<stdio.h>

void rotate(int a[], int n, int k){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = a[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", temp[i]);
    }
}

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,0};
    rotate(a, 10, 3);
    return 0;

}