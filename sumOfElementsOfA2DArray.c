void print(int arr[][/*col*/], int r, int c){
    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
        }
    }
}