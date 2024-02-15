#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    if(a == 0) printf("Invalid Quadratic equation");
    else{
        int d = (b * b) - (4 * a * c);
        double discri = sqrt(abs(d));
        if(d == 0){
            printf("As the Discriminant is equal to 0, so the quadratic equation has equal roots: %d", (double)(-b) / (2 * a));
        }
        else if(d > 0){
            int root1 = ((double)(-b) + discri) / 2 * a;
            int root2 = ((double)(-b) - discri) / 2 * a;
            printf("As the Discriminant is greater than 0, so the quadratic equation has two roots: %d and %d", root1, root2);
        }
    }
    return 0;

}