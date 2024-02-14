#include<stdio.h>

int main(){

    int arr[] = {0, 0, 1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = n - 1;
    while(s < e){
        if(arr[s] == 0) s++;
        else if(arr[e] == 1) e--;
        else if(arr[s] == 1 && arr[e] == 0){
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