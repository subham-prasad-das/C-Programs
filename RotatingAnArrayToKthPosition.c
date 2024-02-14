void rotate(int arr[], int n, int k){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];
    }
    // print the array then
}