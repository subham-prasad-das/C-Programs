#include<stdio.h>

int main(){

    int arr[] = {0, 5, 6, 2, 0, 3, 0, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = n - 1;
    while(s < e){
        if(arr[s] == 0) s++;
        else if(arr[e] != 0) e--;
        else if(arr[s] != 0 && arr[e] == 0){
            int temp;
            temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++; e--;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}