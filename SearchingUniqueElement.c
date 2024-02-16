// Searching that one repeating element when the array is sorted and has each element repeated for two times only. 
#include<stdio.h>

int main(){

    int a[] = {1,1,2,2,3,3,4,4,5,6,6,7,7};
    int n = sizeof(a) / sizeof(a[0]);
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= a[i];
    }

    printf("%d", unique);
    
    return 0;

}