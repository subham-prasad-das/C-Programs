// typedef 

#include<stdio.h>

typedef struct Date{
    int i;
}d;

int main(){
    d day = {10};
    printf("%d", day.i);
    return 0;
}

// the main advantageous of 'typedef' is it reduces the programmer to write 'struct Date day = 10;' but instead he can write "d" in the place of "struct Date"..