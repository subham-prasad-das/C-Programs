void bubbSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// greater goes back in subsequent round

void selSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
// greater goes back in subsequent round

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for( ; j >= 0; j--){
            if(arr[j] > temp)
                arr[j + 1] = arr[j];
            else break;
        }
        arr[j + 1] = temp;
    }
}
// 1st place sorted 1st

/*

Bubble Sort:
Best Case Time Complexity: O(n) (when the array is already sorted)
Worst Case Time Complexity: O(n^2)
Space Complexity: O(1)

Selection Sort:
Best Case Time Complexity: O(n^2)
Worst Case Time Complexity: O(n^2)
Space Complexity: O(1)

Insertion Sort:
Best Case Time Complexity: O(n) (when the array is already sorted)
Worst Case Time Complexity: O(n^2)
Space Complexity: O(1)

Merge Sort:
Best Case Time Complexity: O(n log n)
Worst Case Time Complexity: O(n log n)
Space Complexity: O(n) auxiliary space for the merge process

Quick Sort:
Best Case Time Complexity: O(n log n)
Worst Case Time Complexity: O(n^2) (rare, but can occur when the pivot selection is poor)
Space Complexity: O(log n) for the recursive stack (in-place Quick Sort can achieve O(1) space complexity for partitioning)

Heap Sort:
Best Case Time Complexity: O(n log n)
Worst Case Time Complexity: O(n log n)
Space Complexity: O(1) auxiliary space

Counting Sort:
Best Case Time Complexity: O(n + k), where k is the range of the non-negative key values
Worst Case Time Complexity: O(n + k)
Space Complexity: O(n + k)

Radix Sort:
Best Case Time Complexity: O(nk)
Worst Case Time Complexity: O(nk)
Space Complexity: O(n + k)

Bucket Sort:
Best Case Time Complexity: O(n + k), where k is the number of buckets
Worst Case Time Complexity: O(n^2) (if all elements are placed in a single bucket)
Space Complexity: O(n + k)

 */