#include<stdio.h>
#include<limits.h>

int main(){

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // for printing in coloumn
    printf("Printing the array in coloumn --\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    // for printing in rows
    printf("Printing the array in row --\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // for calculating the sum of elements
    int sum = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the elements of the 2D array is: %d\n", sum);
    printf("\n");

    // transpose
    int trr[3][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            trr[j][i] = arr[i][j];
        }
    }
    printf("\nPrinting the transpose of the array --\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", trr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //finding minimum
    int min = INT_MAX;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    printf("The minimum value in the array is: %d\n", min);
    printf("\n");

    //finding the maximum element
    int max = INT_MIN;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    printf("The maximum value in the array is: %d\n", max);
    printf("\n");

    // searching an element
    int key = 5;
    int found = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == key){
                printf("The key entered i.e. %d is found in row %d and coloumn %d", key, i+1, j+1);
                found = 1;
                break;
            }
        }
    }
    if(found == 0) printf("The key is not present in the 2D array");
    printf("\n");

    return 0;
}