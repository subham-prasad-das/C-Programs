// displaying three dates together 

#include<stdio.h>

typedef struct {
    int d, m, y;
} date;

date inputDate(){
    date td;
    printf("Enter todays date: "); scanf("%d %d %d", &td.d, &td.m, &td.y);
    return td;
}

date nextDate(date nd){
    nd.d = 10; nd.m = 2; nd.y = 2024;
    return nd;
}

date* changedDate(date* d3){
    d3->d = 11;
    d3->m = 2;
    d3->y = 2024;
    return d3;
}

int main(){

    date d1 = inputDate();
    printf("Todays date is: %d - %d - %d \n", d1.d, d1.m, d1.y);
    date d2 = nextDate(d1);
    printf("Tomorrow's date is: %d - %d - %d \n", d2.d, d2.m, d2.y);
    date* d3 = changedDate(&d2);
    printf("Day after tomorrow's date is: %d - %d - %d \n", d3->d, d3->m, d3->y);

    return 0;
}