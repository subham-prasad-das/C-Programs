#include<stdio.h>
#include<stdlib.h>

int main(){

    int* mal = (int*)malloc(4*sizeof(int));
    for(int i = 0; i < 4; i++){
        scanf("%d", &mal[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%d ", mal[i]);
    }


    int* cal = (int*) calloc(4, sizeof(int));
    for(int i = 0; i < 4; i++){
        scanf("%d", &cal[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%d ", cal[i]); // 1 2 3 4
    }

    cal = realloc(cal, 5*sizeof(int));
    cal[4] = 5;
    for(int i = 0; i < 5; i++){
        printf("%d ", cal[i]); // 1 2 3 4 5
    }

    
    free(cal);
    return 0;

}