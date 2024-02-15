#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200]; // taken static arrays of size 100 to remove headaches of boundary checking;
    int size1, size2;

    // Input size and elements of first array
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of second array
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0; // i for arr1, j for arr2, k for arr3;
    // Merge the arrays in a sorted manner(acending order)
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++; k++;
        } else {
            arr3[k] = arr2[j];
            k++; j++;
        }
    }
    // Copy the remaining elements of arr1 or arr2, if any
    while (i < size1) {
        arr3[k] = arr1[i];
        i++; k++;
    }
    while (j < size2) {
        arr3[k] = arr2[j];
        j++; k++;
    }

    // Print the merged array
    printf("Merged and sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    
    return 0;
}