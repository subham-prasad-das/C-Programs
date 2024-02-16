#include<stdio.h>

int main(){

    int arr[10] = {0,0,3,0,5,6,7,0,9,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = size - 1;

    while(s <= e){
        if(arr[e] == 0) e--;
        else if(arr[s] == 0) {
            int temp;
            temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            e--;
            s++;
        }
        else if((arr[s] != 0) && (arr[e] != 0)){ 
            s++;
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}